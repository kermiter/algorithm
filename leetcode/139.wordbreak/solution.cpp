#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
    public:
    /*
     * We use a boolean vector dp[].
       dp[i] is set to true if a valid word (word sequence) ends there. 
       The optimization is to look from current position i back and only
       substring and do dictionary look up in case the preceding position j with dp[j] == true is found
     *
     *
     *
     *
     * */    
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.size()<=0) return false;
        vector<bool>dp(s.length()+1,false);
        dp[0]=true;
        for(int i=1; i<=s.length();i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(dp[j])
                {
                    string tmp=s.substr(j,i-j);
                    vector<string>::iterator ite;
                    ite=find(wordDict.begin(),wordDict.end(),tmp);
                    if(ite!=wordDict.end())
                    {
                        dp[i]=true;
                        break;
                    }
                
                }
            
            }
        
        }
        return dp[s.length()];
    }

};
int main()
{
    Solution res;
    string s="leetcode";
    vector<string>wordDict({"leet","code"});
    bool ans=res.wordBreak(s,wordDict);
    cout<<ans<<endl;
    return 0;
}
