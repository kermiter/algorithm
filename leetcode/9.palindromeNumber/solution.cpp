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
        bool isPalindrome(int x) {
            if(x<0|| (x%10==0 && x>0))
            {
                return false;
            }

            int revertNum=0;
            while(revertNum<x)
            {
                revertNum=revertNum*10+x%10;
                x=x/10;
                
            }

            return (x==revertNum||x==revertNum/10);
    }

};
int main()
{
    int num=12321;
    Solution res;
    bool ans=res.isPalindrome(num);
    cout<<ans<<endl;
    return 0;
}
