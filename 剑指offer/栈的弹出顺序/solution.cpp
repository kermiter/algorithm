#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        bool IsPopOrder(vector<int>pushV,vector<int>popV){
            if(pushV.size()!=popV.size())
                return false;
            vector<int>res;
            int i=0;
            int j=0;
            bool result=false;
            while(j<popV.size()){
                while(res.empty()|| res.back() !=popV[j] )
                {
                    res.push_back(pushV[i]);
                    i++;
                    if(i==pushV.size())
                        break;
                    
                }
                if(res.back()!=popV[j])
                     break;

                res.pop_back();
                j++;
                if(res.empty()&&j==popV.size())
                    result=true;

            
            }
            return result;
        
        }


};
int main()
{
    Solution res=Solution();
    vector<int>pushV({1,2,3,4,5}),popV0({1,2,3,4,5}),popV1({4,5,3,2,1}),popV2({4,3,5,1,2});
    cout<<"popV0:true,"<<res.IsPopOrder(pushV,popV0)<<endl;
    cout<<"popV1:true"<<res.IsPopOrder(pushV,popV1)<<endl;
    cout<<"popV2:false"<<res.IsPopOrder(pushV,popV2)<<endl;



    return 0;
}

