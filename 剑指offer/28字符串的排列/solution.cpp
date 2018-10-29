#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        vector<string>Permutation(string str)
        {   
            if(str.empty())
                return res;
            permutate(str,0);
           sort(res.begin(),res.end());
            return res;
        }
        void permutate(string &str,int pos)
        {
            if(pos==str.size())
            {
                res.push_back(str);
                return;
            }
            //sort(str.begin()+pos,str.end());
            for (int ibe=pos;ibe<str.size();ibe++)
            {
                if(ibe>pos)
                {
                    if(str[ibe]==str[pos])
                        continue;
                }
                char tmp=str[pos];
                str[pos]=str[ibe];
                str[ibe]=tmp;
                permutate(str,pos+1);
                tmp=str[pos];
                str[pos]=str[ibe];
                str[ibe]=tmp;
            }
        
        }
    private:
        vector<string>res;

};
//牛客上看到的第二种方法
void PermutationHelp(vector<string>&ans,int k,string str)
{
    if(k==str.size()-1)
        ans.push_back(str);
    for(int i=k; i<str.size();i++)
    {
        if(i!=k&&str[i]==str[k])
            continue;
        swap(str[i],str[k]);
        PermutationHelp(ans,k+1,str);
    
    }

}
vector<string>Permutation(string str)
{
    sort(str.begin(),str.end());
    vector<string>ans;
    PermutationHelp(ans,0,str);
    return ans;

}
int main()
{
    string str="abcd";
    Solution ans;
    vector<string>res;
    res=ans.Permutation(str);
    //for(auto s: res)
      //  cout<<s<<endl;
    res=Permutation(str);
    for(auto s:res)
        cout<<s<<";";
    return 0;
}

