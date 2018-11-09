#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        int threeSumMulti(vector<int>& A, int target){
            if(A.empty())
                return 0;
            int mod=1000000007;
            vector<long>arr(101,0);
            for(auto s:A)
                arr[s]++;
            long ans=0;
            int z;
            //x!=y!=z
            for(int i=0;i<100;i++)
            {
                for(int j=i+1; j<101;j++)
                {
                    z=target-i-j;
                    if(z>=0&&z<=100)
                    {
                        if(j<z)
                        {
                        
                            ans+=arr[i]*arr[j]*arr[z];
                            ans=ans%mod;
                        }
                    
                    }
                }
            
            }
            //x==y!=z
            for(int i=0; i<101;i++)
            {
                z=target-2*i;
                if(i<z&&z>=0&&z<=100)
                {   
                    ans+=(arr[i]-1)*arr[i]/2*arr[z];
                     ans%=mod;
                }
            }
            //x!=y==z
            for(int i=0;i<101;i++)
            {
                if((target-i)%2==0)
                {   z=(target-i)/2; 
                    if(i<z&&z>=0&&z<=100)
                    {
                        ans+=arr[i]*arr[z]*(arr[z]-1)/2;
                        ans%=mod;
                    }
                }
            
            }
            //x==y==z
            for(int i=0;i<101;i++)
            {
                if(target==3*i)
                {  
                    ans+=arr[i]*(arr[i]-1)*(arr[i]-2)/6;
                    ans%=mod;
                }
            }
            return (int)ans;
        
        }

};
int main()
{
    vector<int>ivec({1,1,2,2,2,2});
    vector<int>ivec2(3000,0);
    Solution s;
    int res;
    res=s.threeSumMulti(ivec2,0);
    cout<<res<<endl;
}
