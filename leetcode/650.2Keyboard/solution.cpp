#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        int minStep(int n){
            int ans=0,d=2;
            while(n>1)
            {
                while(n%d==0)
                {
                    ans+=d;
                    n=n/d;
                }
                d++;
            }
            return ans;
        }

};
int main()
{
    Solution ans;
    cout<<ans.minStep(3);

}
