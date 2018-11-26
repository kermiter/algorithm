class Solution {
public:
    int max(int num1,int num2)
    {
        
        return num1>=num2?num1:num2;
        
    }
    int maxSubArray(vector<int>& nums) {
     int prev=0;
     int res=INT_MIN;
     for(int i=0;i<nums.size();i++)
     {
         prev=max(prev+nums[i],nums[i]);
         res=max(prev,res);
     }
     return res;
    }
};
