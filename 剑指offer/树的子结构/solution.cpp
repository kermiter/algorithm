#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
    public:
        bool HasSubtree2(TreeNode*pRoot1,TreeNode*pRoot2)
        {

            if(pRoot2==NULL)
                return true;

            if (pRoot1==NULL)
                return false; 

            if(pRoot1->val==pRoot2->val)
            {
            
                return HasSubtree2(pRoot1->left,pRoot2->left) && HasSubtree2(pRoot1->right,pRoot2->right);
            }
            else
                return false;

        }


        bool HasSubtree(TreeNode* pRoot1,TreeNode* pRoot2)
        {
            bool result=false;

            if(pRoot1!=NULL&&pRoot2!=NULL)
            {
                if(pRoot1->val==pRoot2->val)
                result=HasSubtree2(pRoot1,pRoot2);
                if(!result)
                    result=HasSubtree(pRoot1->left,pRoot2);
                if(!result)
                    result=HasSubtree(pRoot1->right,pRoot2);
            }
            return result;
        }


};

int main()
{
    


    return 0;
}

