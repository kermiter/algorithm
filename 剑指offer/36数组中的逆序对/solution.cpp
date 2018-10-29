#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        int InversePairs(vector<int> data){
            if(data.empty())
                return 0;
            Split(data,0,data.size()-1);
            for(auto s:data)
                cout<<s<<";";
            return iPairs%1000000007;
        
        }
        Solution():iPairs(0){}
        void Split(vector<int>&data,int begin,int end)
        {
            if(begin>=end)
            {
                return;
            }
            int mid=begin+(end-begin)/2;
            Split(data,begin,mid);
            Split(data,mid+1,end);
            merge(data,begin,mid,end);
        }
        void merge(vector<int>&data,int begin,int mid,int end)
        {
            vector<int>tmp;
            int i=begin,j=mid+1;
            for(;i<=mid&&j<=end;)
            {
                if(data[i]>data[j])
                {
                    tmp.push_back(data[i]);
                    iPairs=(iPairs+end-j+1)%1000000007;
                    i++;
                }
                else
                    tmp.push_back(data[j++]);
            
            }
            while(i<=mid)
            {
                tmp.push_back(data[i++]);
            }
            while(j<=end)
            {
                tmp.push_back(data[j++]);
            }
            i=begin;
            j=0;
            while(i<=end)
            {
                data[i++]=tmp[j++];
            }
            return;
        }
    private:
        int iPairs;

};
int main()
{
    Solution ans;
    vector<int>ivec({1,3,2,5,4,7,6,0});
    cout<<ans.InversePairs(ivec)<<endl;


    return 0;
}

