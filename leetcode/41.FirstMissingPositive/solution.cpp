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
        int firstMissingPositive(vector<int>& nums) {
            
            int len=nums.size(),min=INT_MAX,max=INT_MIN;
            bool flag=false;
            for(auto c:nums)
                if(c>0)
                {   if(!flag)
                        flag=true;
                    if(c<min)min=c;
                    if(c>max)max=c;
                }
            int logic_max=INT_MAX;
            if(flag)
                logic_max=min+len-1;
            else
                return 1;
            if(min>len||max<0) return 1;
            for(int i=0;i<len;i++)
            {
                
                while((nums[i]>0) &&(nums[i]<=len)&& (nums[i]-min!=i)&&(nums[i]-min<len))
                {
                    //cout<<"nums[nums[i]-min]"<<nums[nums[i]-min]<<nums[i]-min<<endl;
                    if(nums[nums[i]-min]!=nums[i])
                        swap(nums[i],nums[nums[i]-min]);
                    else
                        break;
                }
            }
            int i=0;
            for(i=0;i<len-1;i++)
            {
                if(nums[i]+1!=nums[i+1])
                    break;
            }
            int res=1;
            if(i!=len-1)
            {
                if(i!=0)
                res= nums[i]+1;
                else
                {
                    if(nums[0]>1)
                        res=nums[]
                }
            }
            else{
                
                if(nums[0]!=1)
                {
                    res=nums[0]-1;
                }
                else
                    res=nums[len-1]+1;
            
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
    vector<int>ivec({1,1});
    int res;
    res=ans.firstMissingPositive(ivec);
    cout<<res<<endl;

    return 0;
}
/*
 *class Solution
{
public:
    int firstMissingPositive(int A[], int n)
    {
        for(int i = 0; i < n; ++ i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};

 *
 *
 *
 * */
