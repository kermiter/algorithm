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

        int factorial(int n)
        {
            int result=1;
            for(int i=1;i<=n;i++)
                result*=i;
            return result;
        }
        string getPermutation(int n, int k) {
            string res(n,'0');
            string ans;
            for(int i=0; i<n;i++)
                res[i]=i+1+'0';

            int base=factorial(n-1);
            k--;
            for(int i=n-1;i>0;k%=base,base/=i,i--)
            {
                char t=res[k/base];
                ans.push_back(t);
                res.erase(k/base,1);
            }
            
            ans.push_back(res[0]);
            return ans;

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
    cout<<ans.getPermutation(4,2); 

    return 0;
}
