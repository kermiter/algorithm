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
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int>res;
            stack<TreeNode*>s;
            TreeNode*p=root,*pre=NULL;
            while(p||!s.empty()){
                
                if(!p)
                {
                    p=s.top();
                    if(p->right)
                        p=p->right;
                    else
                    {
                        res.push_back(p->val);
                        s.pop();
                        pre=p;
                        if(!s.empty())
                            p=s.top();
                    
                        if(pre==p->right)
                        {    
                             p->right=NULL;
                        }

                        p=NULL;
                        continue;
                    }
                    
                
                }

                s.push(p);
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
    vector<int>vec=ans.postorderTraversal(&root);
    for(auto i:vec)
        cout<<i<<",";

    return 0;
}
/*
 *public List<Integer> preorderTraversal(TreeNode root) {
    List<Integer> result = new ArrayList<>();
    Deque<TreeNode> stack = new ArrayDeque<>();
    TreeNode p = root;
    while(!stack.isEmpty() || p != null) {
        if(p != null) {
            stack.push(p);
            result.add(p.val);  // Add before going to children
            p = p.left;
        } else {
            TreeNode node = stack.pop();
            p = node.right;   
        }
    }
    return result;
}
In Order Traverse
public List<Integer> inorderTraversal(TreeNode root) {
    List<Integer> result = new ArrayList<>();
    Deque<TreeNode> stack = new ArrayDeque<>();
    TreeNode p = root;
    while(!stack.isEmpty() || p != null) {
        if(p != null) {
            stack.push(p);
            p = p.left;
        } else {
            TreeNode node = stack.pop();
            result.add(node.val);  // Add after all left children
            p = node.right;   
        }
    }
    return result;
}
Post Order Traverse
public List<Integer> postorderTraversal(TreeNode root) {
    LinkedList<Integer> result = new LinkedList<>();
    Deque<TreeNode> stack = new ArrayDeque<>();
    TreeNode p = root;
    while(!stack.isEmpty() || p != null) {
        if(p != null) {
            stack.push(p);
            result.addFirst(p.val);  // Reverse the process of preorder
            p = p.right;             // Reverse the process of preorder
        } else {
            TreeNode node = stack.pop();
            p = node.left;           // Reverse the process of preorder
        }
    }
    return result;
}

 *
 *
 *
 * */
