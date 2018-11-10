#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution{
    public:
        int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D)
        {
            if(A.empty()||B.empty()||C.empty()||D.empty())
            {
            
                return 0;
            }

            int sum=0;
            map<int,int>tmap1;
            map<int,int>tmap2;
            int len=A.size();
            map<int,int>::iterator it;
            int tmp;
            for(int i=0; i<len; i++)
            {
                for(int j=0;j<len;j++)
                {
                    tmp=A[i]+B[j];
                    it=tmap1.find(tmp);
                    if(it!=tmap1.end())
                        tmap1[tmp]++;
                    else
                    {
                        tmap1[tmp]=1;
                    }
                
                }
            
            }

            for(int i=0; i<len; i++)
            {
                for(int j=0; j<len;j++)
                {
                    tmp=C[i]+D[j];
                    it=tmap2.find(tmp);
                    if(it!=tmap2.end())
                        tmap2[tmp]++;
                    else
                        tmap2[tmp]=1;

                }
            
            }
            map<int,int>::iterator itmp;
            for(it=tmap1.begin();it!=tmap1.end();it++)
            {
                int s=it->first;
                itmp=tmap2.find(-1*s);
                if(itmp!=tmap2.end())
                    sum+=it->second*itmp->second;
            
            }

            return sum;
        }

};
int main()
{
    vector<int>A({1,2}),B({-2,-1}),C({-1,2}),D({0,2});
    Solution ans;
    cout<<ans.fourSumCount(A,B,C,D);

}
