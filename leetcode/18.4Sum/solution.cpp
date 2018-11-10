#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
    public:

    vector<vector<int>> fourSum(vector<int>& nums, int target){
        
        vector<vector<int> >res;
        if(nums.size()<4)
        {
            return res;
        }
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int sum=0;

        for(int i=0; i<len-3; i++)
        {
            if(i&&nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<len-2; j++)
            {
                if(i!=j-1&&nums[j]==nums[j-1]) continue;

                int m=j+1;
                int n=len-1;
                int tmp=nums[i]+nums[j];
                while(m<n)
                {
                    sum=nums[m]+nums[n]+tmp;
                    if(sum==target)
                    {
                        vector<int>tvec({nums[i],nums[j],nums[m],nums[n]});
                        res.push_back(tvec);
                        m++;
                        n--;
                        while(m<n&&nums[m]==nums[m-1]) m++;
                        while(m<n&&nums[n]==nums[n+1]) n--;
                    }
                    else if(sum<target)
                    {
                        m++;
                        while(m<n&&nums[m]==nums[m-1])m++;
                    
                    }
                    else
                    {
                        n--;
                        while(m<n&&nums[n]==nums[n+1])n--;
                    }
                
                }
                
            
            }
            
        }
        return res;
    }

};
int main()
{
    vector<int>exvec({-1,-5,-5,-3,2,5,0,4});
    Solution ans;
    vector<vector<int> >res;
    res=ans.fourSum(exvec,-7);
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
            cout<<res[i][j]<<",";
        cout<<endl;
    
    }
}
