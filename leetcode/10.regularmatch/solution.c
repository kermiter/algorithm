#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool matchCore(char*,char*);
bool isMatch(char* s, char* p) {
    if(s==NULL||p==NULL)
        return FALSE;
    return matchCore(s,p);
}
bool matchCore(char* str,char*p)
{
    if(*str=='\0'&&*p=='\0')
        return TRUE;
    if(*str!='\0'&&*p=='\0')
        return FALSE;
    if(*(p+1)=='*')
    {
        if(*str==*p||(*p=='.' && *str!='\0'))
            return matchCore(str,p+2)||
                   matchCore(str+1,p+2)||
                   matchCore(str+1,p);
        else
            return matchCore(str,p+2);
    
    
    }
    if(*str==*p||(*p=='.' && *str!='\0'))
        return matchCore(str+1,p+1);
    return FALSE;




}
int main()
{
    

    return 0;
}
