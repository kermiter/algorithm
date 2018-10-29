#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
typedef multiset<int, greater<int> > intSet;
typedef multiset<int, greater<int> >::iterator setIterator;
class Solution{
    public:
        vector<int> GetLeastNumbers_Solution(vector<int> input, int k){
            vector<int>res;
            if(k<=0 || input.size()<k)
            {
                return res;
            }
            vector<int>::const_iterator iter= input.begin();
            for(; iter!=input.end(); iter++)
            {
                if(leastNumbers.size()<k)
                {
                    leastNumbers.insert(*iter);
                }
                else
                {
                    setIterator iterGreatest= leastNumbers.begin();
                    if(*iter<*iterGreatest)
                    {
                        leastNumbers.erase(iterGreatest);
                        leastNumbers.insert(*iter);
                    }
                }
            
            
            }
            for(auto s:leastNumbers)
                res.push_back(s);
            return res;

        
        }
    private:
        intSet leastNumbers;

};
int main()
{
    vector<int>ivec({4,5,1,6,2,7,3,8});
    Solution ans;
    vector<int>res=ans.GetLeastNumbers_Solution(ivec,3);
    for(auto num:res)
        cout<<num<<";";


    return 0;
}

