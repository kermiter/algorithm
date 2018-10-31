#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
    int evalRPN(vector<string> &tokens){
        if(tokens.size()<=2)
            return 0;
        vector<int>svec;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]>="0"&&tokens[i]<="9")
                svec.push_back(tokens[i]-'0');
            else if(tokens[i]=="+"||tokens[i]=='-'||tokens[i]=='*'||tokens[i]=='/')
            {
                if(svec.size()>=2)
                {
                    int tmp1=0,tmp2=0;
                    tmp1=svec.back();
                    svec.pop_back();
                    tmp2=svec.back();
                    switch (tokens[i]){
                        case '+':
                            svec.push_back(tmp1+tmp2);
                            break;
                        case '-':
                            svec.push_back(tmp1-tmp2);
                            break;
                        case '*':
                            svec.push_back(tmp1*tmp2);
                            break;
                        case '/':
                            if(tmp2==0)
                                return 0;
                            svec.push_back(tmp1/tmp2);
                            break;
                        default:
                            return 0;
                    }
                                 
                }
                else
                    return 0;
            
            }
            else
                return 0;
        }
        int res=svec.back();
        return res;
    
    }
    

};
int main()
{
    vector<string>tokens({"2","1","+","3","*"});
    Solution ans;
    cout<<ans.evalRPN(tokens);

}
