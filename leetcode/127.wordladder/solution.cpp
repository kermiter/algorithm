#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
class Solution{
    private:
        unordered_map<string,string>fmap;
    public:

    vector<vector<string> > ladderLength(string beginWord, string endWord, vector<string>& wordList) {
            
            queue<string>tovisit;    
            tovisit.push(beginWord);

            int dist=1,min_dist=INT_MAX;
            unordered_set<string>wordDict(wordList.begin(),wordList.end());
            if(wordDict.find(endWord)==wordDict.end()||beginWord==endWord)
                return vector<vector<string> >();
            
            int num=0;
            string word;
            fmap[beginWord]=beginWord;
            vector<vector<string> >svec;
            while(!tovisit.empty()){
                num=tovisit.size();
                for(int i=0;i<num;i++)
                {
                    word=tovisit.front();
                    tovisit.pop();
                    if(word==endWord) 
                    {  
                        vec.push_back(word);
                        svec.push_back(vec);
                        if(dist<min_dist)
                            min_dist=dist;
                    }
                    addWordsNext(word,wordDict,tovisit);
                }
                cout<<endl;
                dist++; 
            }
            //return 0;
            return svec;

    }
    void addWordsNext(string word,unordered_set<string>&dict,queue<string>&tovisit)
    {
        dict.erase(word);
        string key=word;
        for(int i=0; i<word.length();i++)
        {
            char letter=word[i];
            for(int j=0;j<26;j++)
            {
                word[i]='a'+j;
                if(dict.find(word)!=dict.end())
                {
                    tovisit.push(word);
                    dict.erase(word);
                    fmap[word]=key;
                    cout<<"fmap[word]:key  "<<word<<":"<<fmap[word]<<endl;
                
                }
            }
            word[i]=letter;
        
        }
        return;
    
    
    }

};
int main()
{
    string begin="hit",endword="cog";
    vector<string>wordlist({"hot","dot","dog","lot","log","cog"});
    Solution res;
    vector<vector<string> > ans;
    ans=res.ladderLength(begin,endword,wordlist);
    for(int i=0; i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<",";
            cout<<"]"<<endl;
    
    
    }
                

    return 0;
}
