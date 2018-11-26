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
    int binaryGap(int N) {
        if(!(N&(N-1)))
        {
            return 0;
        }

        int j=-1,gap=0;
        for(int i=0;i<32;i++)
        {
            if(N&(1<<i))
            {
                if(j!=-1)
                {
                    gap=max(i-j,gap);
                    j=i;
                }
                else
                    j=i;
            }
        
        }
        return gap;
    }

};
int main()
{
    int num=6;
    Solution ans;
    int res=ans.binaryGap(num);
    cout<<res<<endl;

    return 0;
}
