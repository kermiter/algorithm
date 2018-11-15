#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution{
    public:
        vector<vector<string>> accountsMerge(vector<vector<string>>& accounts)
        {
            vector<vector<string> >res;
            if(accounts.empty())
                return res;
            map<string,string>parents;
            map<string,string>owner;
            map<string,set<string> >unions;
            //并交集算法 映射
            //1:a,b,c   a->a,b->b,c->c
            //2:d,e,f   d->d,e->e,f->f
            //3:g,b,f   g->g,b->b,f->f
            for(int i=0; i<accounts.size();i++)
            {
                for(int j=1;j<accounts[0].size();j++)
                {
                    parents[accounts[i][j]]=accounts[i][j];                
                }
            
            }

            //1:a->a,b->a,c->a
            //2:d->d,e->d,f->d
            //3:g->g,b->a->g,f->d->g ***
            for(int i=0; i<accounts.size(); i++)
            {
                string p=accounts[i][1];
                for(int j=2;j<accounts[i].size();j++)
                {
                    parents[finds(accounts[i][j],parents)]=p;     
                
                }
            
            }

            //union
            //g:a,b-a-g,c->a->g,d->f->g,e->d->f,f->g
            for(int i=0; i<accounts.size();i++)
            {
                for(int j=1; j<accounts[i].size();i++)
                {
                    unions[finds(accounts[i][j],parents)].insert(accounts[i][j]);
                
                }
            
            }
            //output
            for(pair<string,set<string> > p: unions)
            {
                vector<string>emails(p.second.begin(),p.second.end());
                emails.insert(p.begin(),owner[p.first]);
                res.push_back(emails);
            }
            return res;
        }
    private:
        //寻找s的parents或代表
        string finds(string s,map<string,string>parents)
        {
            
            return parents[s]==s?s:finds(parents[s],parents);
        
        }



};
int main()
{


}
