#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*
 *
 *
 *
 *
 * */
int main(){



    return 0;
}
int GetMPartionsMin(vector<int>&ivec,int m)
{
    if(ivec.empty())return -1;
    int n=ivec.size();
    if(m>n) return -1;
    vector<vector<int> >dp(n+1,vector<int>(m+1,0));
    //求解前i个数字,分成1段的和。
    for(int i=1;i<=n;i++)
        dp[i][i]=dp[i-1][1]+ivec[i-1];
    for (int i=1; i<=n;i++)
    {
        for(int j=2; j<=i; j++)
        {
            int min_sum=INT_MAX;
            int tmp=INT_MIN;
            for(int k=1; k<=i; k++)
            {
                tmp=max(dp[k][j-1],dp[i][1]-dp[k][1]);
                if(tmp<min_sum)
                    min_sum=tmp;
            }
            d[i][j]=min_sum;
        }
    
    }

    return dp[n][m];
}
/*
 *最小m段和问题：
使用dp[i][j]放置将前i个数分成j段的最小最大值
所以dp[i][1]就是前i个数的和，dp[i-1][1]+a[i];
当j>1的时候，加定前k个数为j-1段，从k~i为第j段
所以前j-1段的最小最大值为：dp[k][j-1](前k数分为j-1段)
最后一段为：dp[i][1]-dp[k][1](前i个数减去前k个数分成一段)
这两个数种取最大值，当所有分段情况完成之后，选出最小值作为dp[i][j]的值 
所以递推公式为： 
dp[i][j] = min{max{dp[i][1]-dp[k][1],dp[k][j-1]}}
 *
 *
 *
 * */
