#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        //排序夹逼
        int threeSumClosest(vector<int>& nums, int target)
        {
            if(nums.empty())
                return 0;
            sort(nums.begin(),nums.end());
            cout<<endl;
            int len= nums.size();
            int min= INT_MAX;
            int gap= INT_MAX;
            int sum= INT_MAX;
            int tmp;
            for(int i=0; i<len-2; i++)
            {
                int j=i+1;
                if(i>0&&nums[i]==nums[i-1]) continue;
                int k=len-1;
                while(j<k)
                {
                    sum=nums[i]+nums[j]+nums[k];
                    //cout<<i<<","<<j<<","<<k<<":"<<sum<<endl;
                    tmp=abs(sum-target);
                    if(tmp<gap)
                    {
                        gap= tmp;
                        min=sum;
                    }
                    if(sum==target)
                    {
                        
                        return sum;       
                    }
                    else if(sum>target)
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
            return min;
        
        }

};
int main()
{
    vector<int>question({-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6});
    //vector<int>ques({-2,-2,4,1});
    int res;
    Solution ans;
    res=ans.threeSumClosest(question,0);
    cout<<res<<endl;
}
