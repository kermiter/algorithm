#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
    private:
        string input;
        string res;
    public:
    //dynmamic alogthrim
    //if s[i]==s[j], then dp[i][j] depends on dp[i+1][j-1] 是否回文
    string longestPalindrome(string s)
    {
        (*this).input=s;
        if(s.length()<=0)
            return "";
        if(s.length()==1)
            return s;
        int length=s.length();

        vector<vector<bool> >dp_vec(length);

        for (int i=0; i<length; i++)
            dp_vec[i].resize(length);
        //init dp_vec
        for (int i=0; i<dp_vec.size();i++)
            for (int j=0; j<dp_vec[0].size();j++)
                if (i>=j)
                    dp_vec[i][j]=true;
                else
                    dp_vec[i][j]=false;
        //判断最长回文
        int max_len=1;
        int ibeg=-1,iend=-1;
        for(int k=1; k<length; k++)
        {
            for (int i=0; i<length-k;i++)
            {
                int j=k+i;
                if (s[i]!=s[j])
                    dp_vec[i][j]=false;
                else
                {
                    dp_vec[i][j]=dp_vec[i+1][j-1];
                    if(dp_vec[i][j] && k+1>max_len)
                    {
                        ibeg=i;
                        iend=j;
                        max_len=k+1;
                    }
                
                }
            }
            
        
        }
        cout<<"max_len:"<<max_len<<endl;
        (*this).res=s.substr(ibeg,max_len);
        return s.substr(ibeg,max_len);    
    }
    void output() 
    {
        cout<<"string :"<<this->input<<endl;
        cout<<"result:"<<this->res<<endl;
    }


};

int main()
{   
    string s="abacdfgdcaba";
    Solution S0=Solution();
    string string0=S0.longestPalindrome(s);
    S0.output();
    return 0;
}
