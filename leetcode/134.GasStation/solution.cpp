#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
class Solution{
    public:
        /*
         *If car starts at A and can not reach B. Any station between A and B
can not reach B.(B is the first station that A can not reach.)
If the total number of gas is bigger than the total number of cost. There must be a solution.
(Should I prove them?)

         *
         * */
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int total=0;
            int j=-1;
            for(int i=0,sum=0; i < gas.size(); i++)
            {
                sum += gas[i]-cost[i];
                total+=gas[i]-cost[i];
                if(sum<0)
                {
                    j=i;
                    sum=0;
                }
            }

            return total>=0?j+1:-1;
    }
};
int main()
{
    TreeNode root(1),left(2),right(3),lleft(4),lright(5);
    root.left=&left;
    root.right=&right;
    left.left=&lleft;
    left.right=&lright;
    Solution ans;
 

    return 0;
}
