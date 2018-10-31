#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{
    public:
        int run(TreeNode *root){
        
            if(root==NULL)
                return 0;
            if(root->left==NULL)
                return run(root->right)+1;
            if(root->right==NULL)
                return run(root->left)+1;

            int ileft =run(root->left)+1;
            int iright=run(root->right)+1;

            return ileft<iright?ileft:iright;
        }


};
int main()
{



}
