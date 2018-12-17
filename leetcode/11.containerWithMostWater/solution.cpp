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
        int maxArea(vector<int>& height) {
            
            int start=0,end=height.size()-1;
            int res=0,sum=0;
            while(start<end)
            {
                sum=min(height[start],height[end])*(end-start);
                res=max(sum,res);
                if(height[start]<=height[end])
                    start++;
                else
                    end--;
            
            }
            return res;
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
