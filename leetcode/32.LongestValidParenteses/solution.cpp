#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<stack>
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
        int longestValidParentheses(string s) {
              stack<char>stck;
              int Lmax=0,last=-1;
              int cnt=0,len=s.size();
              for(int i=0; i<len;i++)
             {
                if(s[i]=='(')
                    stck.push(i);
                else if(s[i]==')')
                {
                    if(!stck.empty())
                    {
                        stck.pop();
                        if(!stck.empty())
                        Lmax=max(Lmax,i-stck.top());
                        else
                            Lmax=max(Lmax,i-last);
                    }
                    else
                    {    
                        last=i;

                    }   
                }
                
             }
              
             return Lmax>cnt?Lmax:cnt;   
    
    
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
    string pathes=")()())";
    int res=ans.longestValidParentheses(pathes);
    cout<<res;

    return 0;
}
