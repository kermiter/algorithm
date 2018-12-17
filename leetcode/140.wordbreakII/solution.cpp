#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution{
        /*
         *Input:
            s = "catsanddog"
            wordDict = ["cat", "cats", "and", "sand", "dog"]
          Output:
            [
                "cats and dog",
                "cat sand dog"
            ]

         *
         *
         *
         * */
        //memorized,DFS+memoried
    public:
        vector<string> wordBreak(string s, vector<string>& wordDict) {

            unordered_set<string>dict(wordDict.begin(),wordDict.end());
            return wordBreak2(s,dict);
        }

    private:
        unordered_map<string,vector<string> >m;
        vector<string>combine(string word,vector<string>prev)
        {
            for(int i=0; i<prev.size();i++)
            {
                prev[i]+=" "+word;
            }
            return prev;
        }
    public:
        vector<string> wordBreak2(string s, unordered_set<string>& dict) {
            if(m.count(s)) return m[s];
            vector<string>result;
            if(dict.count(s)){
                result.push_back(s);
            }
            for(int i=1;i<s.size();i++)
            {
                string word=s.substr(i);
                if(dict.count(word)){
                    string rem=s.substr(0,i);
                    vector<string>res=combine(word,wordBreak2(rem,dict));                
                    result.insert(result.end(),res.begin(),res.end());
                }
            
            
            }
        
            m[s]=result;//memorized
            return result;
        }

};
int main()
{
    string s="catsanddog";
    vector<string>vsvc({"cat", "cats", "and", "sand", "dog"});
    unordered_set<string>dict(vsvc.begin(),vsvc.end());
    Solution res;
    vector<string>ans;
    ans=res.wordBreak(s,vsvc);
    //for(auto st: ans)
     //   cout<<st<<endl;
    cout<<"s:  "<<s<<"s.substr:"<<s.substr(1)<<endl;
}
