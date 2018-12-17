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
         *
         *Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1


         *
         * */
        void nextPermutation(vector<int>& nums) {
            int n= nums.size(),k,l;
            for(k=n-2; k>=0;k--)
                if(nums[k]<nums[k+1])
                    break;
            if(k<0)
            {
            
                reverse(nums.begin(),nums.end());
            
            }
            else
            {
                for(l=n-1;l>k;l--)
                    if(nums[l]>nums[k])
                        break;
                swap(nums[l],nums[k]);
                reverse(nums.begin()+k+1,nums.end());
            
            }
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
    vector<int>nums({1,2,3});
    cout<<"prime nums:";
    for(int i:nums)
        cout<<i<<",";
    cout<<endl;
    ans.nextPermutation(nums);
    cout<<"Next permutation:"<<endl;
    for(int i:nums)
        cout<<i<<",";

    return 0;
}
/*
 *
 *
 * Well, in fact the problem of next permutation has been studied long ago. From the Wikipedia page, in the 14th century, a man named Narayana Pandita gives the following classic and yet quite simple algorithm (with minor modifications in notations to fit the problem statement):

Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, the permutation is sorted in descending order, just reverse it to ascending order and we are done. For example, the next permutation of [3, 2, 1] is [1, 2, 3].
Find the largest index l greater than k such that nums[k] < nums[l].
Swap nums[k] and nums[l].
Reverse the sub-array from nums[k + 1] to nums[nums.size() - 1].*/
