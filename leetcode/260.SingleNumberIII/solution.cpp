#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution{
    public:
    vector<int> singleNumber(vector<int>& nums) {
     int tmp1=0,tmp2=0;
     for(auto s: nums)
     {
        tmp1^=s;
     }
     int bit=0;
     for(int i=0;i<32;i++)
     {
        if(tmp1&(1<<i))
        {
            bit=i;
            break;       
        }
     }
     tmp1=0;
     for(auto s:nums)
     {
        if(s&(1<<bit))
        {
            tmp1^=s;
        }
        else
            tmp2^=s;
     
     }
     return vector<int>({tmp1,tmp2});

    }

};
int main()
{
    vector<int>nums({1,2,1,3,2,5});
    Solution ans;
    vector<int>res=ans.singleNumber(nums);
    for(auto s:res)
        cout<<s<<endl;
    return 0;
}
