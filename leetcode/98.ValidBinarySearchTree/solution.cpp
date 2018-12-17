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
        //判断有效的搜索二叉树
       bool isValidBST(TreeNode* root) {
            
          return isValidBST(root,LONG_MIN,LONG_MAX);  
    }
       bool isValidBST(TreeNode* root,long min_val,long max_val)
       {
            if(root==nullptr)return true;
            if(root->val >=max_val || root->val<=min_val) return false;
            return isValidBST(root->left,min_val,root->val)&&isValidBST(root->right,root->val,max_val);
       
       }

       /*
        * 二叉搜索树中序遍历即为升序，按照这个思路写
        *bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return validate(root, prev);
        }
        bool validate(TreeNode* node, TreeNode* &prev) {
            if (node == NULL) return true;
            if (!validate(node->left, prev)) return false;
            if (prev != NULL && prev->val >= node->val) return false;
            prev = node;
            return validate(node->right, prev);
        }
        *
        *
        *
        * */
};
int main()
{
    TreeNode root(2),left(1),right(3);
    root.left=&left;
    root.right=&right;
    //left.left=&lleft;
    //left.right=&lright;
    Solution ans;
    bool isvalid=ans.isValidBST(&root);
    cout<<isvalid<<endl;

    return 0;
}
