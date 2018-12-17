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
        /*
         *Here is my idea: instead of calculating area by height*width, we can think it in a cumulative way. In other words, sum water amount of each bin(width=1).
Search from left to right and maintain a max height of left and right separately, which is like a one-side wall of partial container. Fix the higher one and flow water from the lower part. For example, if current height of left is lower, we fill water in the left bin. Until left meets right, we filled the whole container
         *
         *
         *
         * */
        int trap(vector<int>& height) {
            
            int maxleft=0,maxright=0;
            int left=0,right=height.size()-1;
            int res=0;

            while(left<right)
            {
                if(height[left]<=height[right])
                {
                    if(height[left]>=maxleft) maxleft=height[left];
                    else res += maxleft-height[left];
                    left++;
                }
                else
                {
                    if(height[right]>=maxright) maxright=height[right];
                    else
                        res += maxright-height[right];
                    right--;
                }
            
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
    vector<int>height({0,1,0,2,1,0,1,3,2,1,2,1});
    Solution ans;
    int res=ans.trap(height);
    cout<<res;

 

    return 0;
}
