#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        int min(int val1,int val2,int val3)
        {
            int m=val2<val3?val2:val3;
            return val1<m?val1:m;
        
        }
        int GetUglyNumber_Solution(int index)  
        {
            if(index<=0)
                return 0;
            int *pUgly=new int[index];
            pUgly[0]=1;
            int NextUgly=1;
            int *pUgly2=pUgly;
            int *pUgly3=pUgly;
            int *pUgly5=pUgly;
            while(NextUgly<index)
            {
                int min_ugly=min(*pUgly2*2,*pUgly3*3,*pUgly5*5);
                pUgly[NextUgly]=min_ugly;
                while(*pUgly2*2<=pUgly[NextUgly])++pUgly2;
                while(*pUgly3*3<=pUgly[NextUgly])++pUgly3;
                while(*pUgly5*5<=pUgly[NextUgly])++pUgly5;
                NextUgly++;
            }
            return pUgly[NextUgly-1];
        }
};
int main()
{
   Solution ans;
   cout<<ans.GetUglyNumber_Solution(1)<<endl;
   cout<<ans.GetUglyNumber_Solution(3)<<endl;
   cout<<ans.GetUglyNumber_Solution(12)<<endl;


    return 0;
}

