#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        vector<vector<int> >threeSum(vector<int>&nums)
        {
            vector<vector<int> >res;
            if(nums.empty())
                return res;
            sort(nums.begin(),nums.end());
            unsigned int len=nums.size();
            for(int i=0,k=len-1; i<len-2; i++)
            {
                int j=i+1;
                if(nums[i]==nums[j]) continue;
                while(j<k)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int>tmp({nums[i],nums[j],nums[k]});
                        res.push_back(tmp);
                        j++;
                        k--;
                    }
                    if(nums[j]==nums[k])
                        continue;
                
                }
            
            }
        
        }

};
int main()
{


}
