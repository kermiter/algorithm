#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        bool match(char* str, char* pattern){
            if(str[0]=='\0'&&pattern[0]=='\0')
                return true;
            if(pattern[0]!='\0'&&pattern[1]=='*')
                return match(str,pattern+2);
            if((pattern[0]=='.'&&str[0])||pattern[0]==str[0])
            {
                if(match(str+1,pattern+1))
                    return true;
                if(pattern[1]=='*'&&match(str+1,pattern))
                    return true;

            }
            return false;
        }


};
int main()
{
    Solution ans;
    char *str="aaa",*pattern="ab*ac*a";
    cout<<ans.match(str,pattern);


    return 0;
}

