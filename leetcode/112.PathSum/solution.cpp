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
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root&&root->left==NULL&&root->right==NULL&&sum-root->val==0) return true;
        if(root==NULL&&sum!=0)return false;
        
        bool bleft=false;
        if(root)
        {
            bleft=hasPathSum(root->left,sum-root->val);
            if(!bleft)
            bleft=hasPathSum(root->right,sum-root->val);
        }

        return bleft;
        

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
