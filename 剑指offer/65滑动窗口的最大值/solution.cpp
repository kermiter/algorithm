#include<iostream>
#include<vector>
#include<string>
#include<deque>
using namespace std;
class Solution{
    public:
        vector<int> maxInWindows(const vector<int>& num, unsigned int size)
        {
           vector<int>maxInWindows;
            if(num.empty()||size<=0||size>num.size())
            {
            
                return maxInWindows;
            }
            deque<int>index;
            for(int i=0;i<size;i++)
            {
                while(!index.empty()&&num[i]>=num[index.back()])
                    index.pop_back();
                index.push_back(i);
            }
            for(int j=size;j<num.size();j++)
            {
                maxInWindows.push_back(num[index.front()]);
                while(!index.empty()&&num[j]>=num[index.back()])
                    index.pop_back();
                if(!index.empty()&&(j-index.front()>=size))
                    index.pop_front();
                index.push_back(j);
            }
            maxInWindows.push_back(num[index.front()]);
            return maxInWindows;
        }

};
int main()
{
    Solution ans;
    vector<int>res;
    vector<int>ivec({2,3,4,2,6,2,5,1});
    res=ans.maxInWindows(ivec,3);
    for(auto s: res)
        cout<<s<<",";



    return 0;
}

