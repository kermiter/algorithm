#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
class Solution{
    public:
        double Power(double base, int exponent)
        {
            if (abs(base*1.0)<1e-10 && exponent!=0)
            {
                return 0.0;
            }
            if (exponent==0)
            {
            
            return 1.0;
            }

            int sign=1,tmp;
            double res=1.0;
            sign= exponent<0?-1:1;
            tmp=sign*exponent;
            while(tmp>0)
            {
                res*=base;
                tmp--;
            }

            if(sign==-1)
            {
                res=1.0/res;
            }
            return res;
            
        }


};
int main()
{
    Solution ans=Solution();
    cout<<"power(2,3)"<<ans.Power(2,3)<<endl;
    cout<<"power(0,0)"<<ans.Power(0,0)<<endl;
    cout<<"power(2,-3)"<<ans.Power(2,-3)<<endl;



    return 0;
}
