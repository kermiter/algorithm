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
        int candy(vector<int>& ratings) {
            int minsum=ratings.size();
            int len=minsum;
            vector<int>candys(len,1);
            for(int i=1;i<len;i++)
                if(ratings[i]>ratings[i-1])
                    candys[i]=candys[i-1]+1;

            for(int i=len-2;i>=0;i--)
                if(ratings[i]>ratings[i+1])
                    candys[i]=max(candys[i],candys[i+1]+1);
            minsum=0;
            for(int i: candys)
                minsum+=i;
            return minsum;

    }
};
int main()
{
    TreeNode root(1),left(2),right(3),lleft(4),lright(5);
    root.left=&left;
    root.right=&right;
    left.left=&lleft;
    left.right=&lright;
    vector<int>ratings({1,2,87,87,87,2,1});
    Solution ans;
    int res=ans.candy(ratings);
    cout<<res;
 

    return 0;
}
