#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printStr(char *pStr,int n);
bool Incretment(char *p,int n);
void Print1ToMaxOfDigits(int n)
{
    if(n<=0)
        return;
    char *pStr=(char*)malloc(n);
    memset(pStr,'0',n);
    int cnt=0;
    while(!Incretment(pStr,n))
    {
        printStr(pStr,n);
        cnt++;
    }
    cout<<cnt<<endl;
    free(pStr);
    pStr=NULL;
    return;
}
void printStr(char *pStr,int n)
{
    bool bFirst=false;
    for(int i=0; i<n;i++)
    {
        if(!bFirst&&pStr[i]!='0')
        {
            bFirst=true;
            
        }
        if(bFirst)
        {
            printf("%c",pStr[i]);
        
        }
    
    }
    printf("\n");
    return;
}
bool Incretment(char *pStr,int len)
{
    int nSum=0;
    int nd=0;
    int nmod=0;
    bool bOverflow=false;
    for(int i=len-1; i>=0;i--)
    {
        if(i==len-1)
            nSum=pStr[i]-'0'+1+nd;
        else
            nSum=pStr[i]-'0'+nd;
        nd=nSum/10;
        nmod=nSum%10;
        if(i==0&&nd==1)
        {
            bOverflow=true;
            break;
        }
        else if(nd==1)
        {
            pStr[i]=nmod+'0';
        }
        else
        {
            pStr[i]=nmod+'0';
            break;
        
        }
               
    }
    return bOverflow;

}
int main()
{
    int n=0;
    vector<int>ivec(n);
    Print1ToMaxOfDigits(3);

    return 0;
}

