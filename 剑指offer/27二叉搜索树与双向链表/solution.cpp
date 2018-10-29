#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){
    }

};
class Solution{
    public: 
        TreeNode* Convert(TreeNode* pRootOfTree)
        {
            ConvertCore(pRootOfTree);
            return pHead;
        }

        void ConvertCore(TreeNode* pRootOfTree)
        {
            if(pRootOfTree!=NULL)
            {
                ConvertCore(pRootOfTree->left);
                if(pPreNode==NULL)
                {    pRootOfTree->left=pPreNode;
                     pPreNode=pRootOfTree;
                     if(flag)
                     {   
                         pHead=pPreNode;
                         flag=false;
                     }
                }
                else
                {
                    pRootOfTree->left=pPreNode;
                    pPreNode->right=pRootOfTree;
                    pPreNode=pRootOfTree;
                }
                ConvertCore(pRootOfTree->right);
            }
            return;
        }
        Solution():pPreNode(NULL),pHead(NULL),flag(true){}   
        void Output(void)
        {
            TreeNode*p=pHead;
            while(p){
                cout<<p->val<<",";
                p=p->right;
            }
            return;
        }
    private:
        TreeNode* pPreNode;
        TreeNode* pHead;
        bool flag;

};
int main()
{
    TreeNode pTree(10);
    TreeNode node6(6),node14(14),node4(4),node8(8),node12(12),node16(16);
    pTree.left=&node6;
    pTree.right=&node14;
    pTree.left->left=&node4;
    pTree.left->right=&node8;
    pTree.right->left=&node12;
    pTree.right->right=&node16;
    Solution res;
    res.Convert(&pTree);
    res.Output();


    return 0;
}

