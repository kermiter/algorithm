#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        //排序夹逼
        vector<vector<int> >threeSum(vector<int>&nums)
        {
            vector<vector<int> >res;
            if(nums.empty())
                return res;
            sort(nums.begin(),nums.end());
            for(auto s: nums)
                cout<<s<<",";
            cout<<endl;
            int len=nums.size();
            for(int i=0; i<len-2; i++)
            {
                int j=i+1;
                if(i>0&&nums[i]==nums[i-1]) continue;
                int k=len-1;
                while(j<k)
                {
                    int sum=nums[i]+nums[j]+nums[k];
                    //cout<<i<<","<<j<<","<<k<<":"<<sum<<endl;
                    if(sum==0)
                    {
                        vector<int>tmp({nums[i],nums[j],nums[k]});
                        res.push_back(tmp);
                        j++;
                        k--;
                        while(j<k&&nums[j]==nums[j-1]){j++;}
                        while(j<k&&nums[k]==nums[k+1]){k--;}
                    }
                    else if(sum>0)
                    {
                        k--;
                        while(nums[k]==nums[k+1])k--;
                    }
                    else 
                    {
                        j++;
                        while(nums[j]==nums[j-1])j++;
                    }
                
                }
            
            }
            return res;
        
        }

};
int main()
{
    vector<int>question({-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6});
    //vector<int>ques({-2,-2,4,1});
    vector<vector<int> >res;
    Solution ans;
    res=ans.threeSum(question);
    cout<<res.size()<<endl;
    for(auto s: res)
    {   
        for(auto s0:s)
        {    cout<<s0<<",";

        }
        cout<<endl;
    }
}
