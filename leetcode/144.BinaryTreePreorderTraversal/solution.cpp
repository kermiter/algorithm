#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<stack>
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
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int>res;
            stack<TreeNode*>s;
            TreeNode*p=root;
            while(p||!s.empty()){
                if(!p)
                {    
                    p=s.top();
                    s.pop();
                }
                res.push_back(p->val);
                if(p->right)
                    s.push(p->right);
                /*
                if(p->left)
                    p=p->left;
                else
                    p=NULL;
                */
                p=p->left;
          
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
    vector<int>vec=ans.preorderTraversal(&root);
    for(auto i:vec)
        cout<<i<<",";


    return 0;
}
