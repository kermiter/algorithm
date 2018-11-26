#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){
    }

};
class Solution{
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
            if(root==NULL)
                return NULL;
            if(d==1)
            {
                TreeNode *p=new TreeNode(v);
                p->left=root;
                return p;
            }
            
            int depth=1;
            stack<TreeNode*>s1,s2;
            s1.push(root);
            TreeNode *p0=NULL;
            while(!s1.empty())
            {
                if(depth==d-1)
                {
                    while(!s1.empty())
                    {
                        TreeNode*p=s1.top();
                        s1.pop();
                        addOneNode(p,v);
                    }
                    break;
                }
                
               p0=s1.top();
               s1.pop();
               if(p0->left)
               {
                   s2.push(p0->left);
                    
               }
               if(p0->right)
               {
                   s2.push(p0->right);
               
               }
               if(s1.empty())
               {    
                   depth++;
                   s1=s2;
                   while(!s2.empty())s2.pop();
               } 
            }
            return root;
    }

    void addOneNode(TreeNode*pNode,int val){
        if(pNode==NULL)
            return ;

        TreeNode *pLeft  = new TreeNode(val);
        TreeNode *pRight = new TreeNode(val);
        TreeNode *pTmp=pNode->left;
        pNode->left = pLeft;
        pLeft->left = pTmp;
        //right
        pTmp=pNode->right;
        pNode->right=pRight;
        pRight->right=pTmp;

        return ;

    }

    

};
void PreOrder(TreeNode *root)
{
    if(root)
    {
        cout<<root->val<<',';
        PreOrder(root->left);
        PreOrder(root->right);
    }
    return;

}
int main()
{
    TreeNode root(1);
    Solution ans;
    TreeNode *p=NULL;
    root.left=new TreeNode(3);
    root.right=new TreeNode(4);
    root.left->left=new TreeNode(5);
    root.left->right=new TreeNode(6);
    root.right->left=new TreeNode(7);
    root.right->right=new TreeNode(8);
    p=ans.addOneRow(&root,2,3);
    PreOrder(p);

}
