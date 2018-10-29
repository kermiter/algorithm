#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
public:
    int GetNumberOfK(vector<int> data,int k)
    {
        if(data.empty())
            return 0;
        int begin=GetFirstOfK(data,k);
        int end  = GetLastOfK(data,k);
        if(begin==-1 || end==-1)
            return 0;
        return end-begin+1;
    }

    int GetFirstOfK(vector<int>data,int k)
    {
        int begin=0;
        int end=data.size()-1;
        int mid;
        while(begin<end)
        {
            mid=begin+(end-begin)/2;
            if(data[mid]>k)
            {
                end=mid-1;
            }
            else if(data[mid]<k)
            {
                begin=mid+1;
            }
            else
            {
                if(mid-1>=begin&&data[mid-1]==k)
                {
                    end=mid-1;
                }
                else
                    break;
                
            }


        }
        if(begin<end)
        {
            return mid;
        }
        else
        {
            if(data[begin]!=k)
                return -1;
        }
        return begin;

    }
    int GetLastOfK(vector<int>data, int k)
    {
        int begin=0;
        int end=data.size()-1;
        int mid;
        while(begin<end)
        {
             mid=begin+(end-begin)/2;
            if(data[mid]>k)
                end=mid-1;
            else if(data[mid]<k)
                begin=mid+1;
            else
            {
                if(mid+1<=end&&data[mid+1]==k)
                    begin=mid+1;
                else
                    break;
            }
            
        }
        if(begin<end)
            return mid;
        else
        {
            if(data[begin]!=k)
                return -1;
        }
        return begin;
    }

};
int main()
{
    Solution ans;
    vector<int>ivec({1,2,3,3,3,3,3,4});
    cout<<ans.GetNumberOfK(ivec,1)<<endl;



    return 0;
}

