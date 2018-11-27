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
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int> >res;   
            permuteCore(nums,0,res);
            return res;
    }
    void swap(int &num1,int &num2)
    {
    
        int tmp=num1^num2;
        num2=tmp^num2;
        num1=tmp^num2;
    
    }
    void permuteCore(vector<int>&nums,int begin,vector<vector<int> >&res)
    {
        if(begin>=nums.size())
        {
            res.push_back(nums);
            return;
        }
        int len=nums.size();
        for(int i=begin; i<len; i++)
        {
            if(i!=begin&&nums[i]==nums[begin])continue;
            swap(nums[begin],nums[i]);
            permuteCore(nums,begin+1,res);
        }
        //恢复原序状态
        rotate(nums.begin()+begin,nums.begin()+begin+1,nums.end());
        return;
    }


};
int main()
{
    Solution res;
    vector<int>ivec({1,2,3});
    vector<vector<int> >ans=res.permute(ivec);
    for(int i=0; i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<",";
        
        }
        cout<<endl;
    }
    return 0;
}
