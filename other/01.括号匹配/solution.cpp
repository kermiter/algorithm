#include<iostream>
#include<stack>
#include<vector>
using namespace std;
#define MAXN 101
int main()
{
    char ans[MAXN];
    char str[MAXN];
    stack<char>s;
    while(gets(str)){
    
        int i=0;
        for(i;str[i]!=0;i++)
        {
            if(str[i]=='(')
            {
                s.push(i);
                ans[i]=' ';
            }
            else if(str[i]==')')
            {
                if(!s.empty())
                {
                    s.pop();
                    ans[i]=' ';
                }
                else
                    ans[i]='?';
            
            }
            else
            {
                ans[i]=' ';
            }

        }
        while(!s.empty())
        {
            ans[s.top()]='?';
            s.pop();
        }
        puts(ans);
        puts(str);
    }

    return 0;
}
