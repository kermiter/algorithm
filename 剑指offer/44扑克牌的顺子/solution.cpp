#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        bool IsContinuous( vector<int> numbers ){
            if(numbers.empty())
                return false;
            sort(numbers.begin(),numbers.end());
            int len=numbers.size(),icnt=0;
            for(int i=0;i<len;i++)
                if(numbers[i]==0)
                    icnt++;
                else
                    break;
            int small=icnt,big=icnt+1,iicnt=0;
            for(int j=big; j<len;j++)
            {
                if(numbers[j]==numbers[small])
                    return false;

                iicnt+=numbers[j]-numbers[small]-1;
                small++;
                        
            }
            return icnt-iicnt>=0?true:false; 
        }


};
int main()
{
    Solution ans;
    vector<int>ivec({1,2,2,0,0});
    cout<<ans.IsContinuous(ivec);


    return 0;
}

