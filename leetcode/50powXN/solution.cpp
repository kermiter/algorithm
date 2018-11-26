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
        double myPow(double x, int n) {
            if((n==0)&&(x!=0))
                return 1.0;
            if(n>0)
                return powCore(x,n);
            else
                return 1.0/x*powCore(1/x,-(n+1));
    }
        double powCore(double x,int n){
            if(n==1)
                return x;
            if(n%2==0)
                return powCore(x,n/2)*powCore(x,n/2);
            else
                return x*powCore(x,(n-1)/2)*powCore(x,(n-1)/2);
        }

};
int main()
{
    Solution ans;
    double x=2.0;
    int n=-3;
    double res;
    res=ans.myPow(x,n);
    cout<<res<<endl;

    return 0;
}
