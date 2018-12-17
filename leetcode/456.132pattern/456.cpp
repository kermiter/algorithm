#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
//找出满足i<j<k且nums[i]<nums[k]<nums[j]的数列。
//思路：找出nums[i]<nums[j],nums[k]的条件符合k>j,且nums[k]<nums[j].
class Solution{
    public:
    bool find132pattern(vector<int>&nums){
        int min_i=INT_MAX;
        
        for(int j=0;j<nums.size();j++)
        {
            min_i = min(min_i,nums[j]);
            for(int k=j+1; k<nums.size();k++)
                if(nums[k]<nums[j]&&min_i<nums[k])
                    return true;
        
        }
        return false;
    }
    bool find132interval(vector<int>&nums){
        vector<vector<int> >intervals;

        int s=0,i=1;
        while(i<nums.size())
        {
            if(nums[i]<nums[i-1])
            {
                if(s<i-1&&nums[i]>nums[s])
                {
                    //vector<int>tmp({nums[s],nums[i-1]});
                    //intervals.push_back(tmp);
                    cout<<"find!";
                    return true;
                }
                s=i;
            }
        
            for(auto a: intervals)
                if(nums[i]>a[0]&&nums[i]<a[1])
                    return true;
        
            i++;
        }
        return false;
    
    
    }
};
int main()
{
    Solution s=Solution();
    vector<int>input({1,2,3,4});
    vector<int>input1({3,1,4,2});
    //cout<<s.find132pattern(input1)<<endl;
    cout<<s.find132interval(input1)<<endl;
    return 0;

}
