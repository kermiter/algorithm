#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define MAXLEN 256
void FindSubstr(char* str);
int main()
{
    char *s="abccbaddac";
    char *s1="aabcadbbbcca";
    FindSubstr(s1);

}
void FindSubstr(char*str)
{
    if(str==NULL)
        return;
    char strMap[256]={0};
    int len=strlen(str),mmax=0,i=0;
    char res[MAXLEN]={0},tmp[MAXLEN]={0};
    char *p=NULL;
    for(p=str;*p!='\0';p++)
    {
        if(strMap[*p]==0)
        {
            tmp[i++]=*p;
            strMap[*p]=1;
            
        }
        else
        {
            if(i>mmax)
            {
                mmax=i;
                memcpy(res,tmp,mmax);
            }
            memset(strMap,0,256);
            memset(tmp,0,256);
            p=p-
            
        }
        
    }
    if(i>mmax)
    {
        mmax=i;
        memcpy(res,tmp,mmax);
    }
    for(i=0;i<mmax;i++)
        printf("%c",res[i]);
    return;


}
