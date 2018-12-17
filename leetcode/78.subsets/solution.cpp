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
    /*
     *
     *Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

     *
     *
     *
     *
     * */
    vector<vector<int> > combine(vector<vector<int> >vvec,int num)
    {
        vector<vector<int> >res;
        if(vvec.empty())
        {
            vector<int>evc;
            res.push_back(evc);
            evc.push_back(num);
            res.push_back(evc);
            return res;
        }
        bool bfind=false;
        vector<int>::iterator ite;
        for(int i=0;i<vvec.size();i++)
        {
            if(vvec[i].empty())
                res.push_back(vvec[i]);
            else
            {
                //res.push_back(vvec[i]);
                ite=find(vvec[i].begin(),vvec[i].end(),num);
                //防止出现重复的集合
                if(ite!=vvec[i].end())
                {
                    vvec[i].push_back(num);
                     res.push_back(vvec[i]);
            
                }
                else
                {
                    res.push_back(vvec[i]);
                    vvec[i].push_back(num);
                    res.push_back(vvec[i]);
                
                }
            }
        }
        
        res.push_back(vector<int>({num}));
        return res;
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
            if(nums.empty())
                return vector<vector<int> >();
            return subsetCore(nums,0);
    }
    vector<vector<int> >subsetCore(vector<int>&nums,int begin){
        vector<vector<int> >res;
        if(begin>=nums.size())
            return res;
        res=combine(subsetCore(nums,begin+1),nums[begin]);
        return res;
    }
};
int main()
{
    vector<int>nums({1,1,2,2});
    Solution res;
    vector<vector<int> >ans=res.subsets(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<",";
        cout<<"]"<<endl;
    
    }
    return 0;
}
