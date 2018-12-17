#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        /*
         *Given an integer array A, and an integer target, return the number of tuples i, j, k  such that i < j < k and A[i] + A[j] + A[k] == target.

As the answer can be very large, return it modulo 10^9 + 7.

 

Example 1:

Input: A = [1,1,2,2,3,3,4,4,5,5], target = 8
Output: 20
Explanation: 
Enumerating by the values (A[i], A[j], A[k]):
(1, 2, 5) occurs 8 times;
(1, 3, 4) occurs 8 times;
(2, 2, 4) occurs 2 times;
(2, 3, 3) occurs 2 times.
Example 2:

Input: A = [1,1,2,2,2,2], target = 5
Output: 12
Explanation: 
A[i] = 1, A[j] = A[k] = 2 occurs 12 times:
We choose one 1 from [1,1] in 2 ways,
and two 2s from [2,2,2,2] in 6 ways.

         *
         *
         *
         * */
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
