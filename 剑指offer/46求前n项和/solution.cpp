#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Temp{
    public:
        Temp(){ ++N; sum+=N;}
        static void Reset(){N=0;sum=0;}
        static unsigned int getsum(){return sum;}
    private:
        static unsigned int N;
        static unsigned int sum;

};
unsigned int Temp::N=0;
unsigned int Temp::sum=0;
class Solution{
    public:
        int Sum_Solution(int n){
            int ans=n;
            ans&&(ans+=Sum_Solution(n-1));
            return ans;
        }
        int sum(int n)
        {
            Temp *a;
            a=new Temp[n];
            delete []a;
            a=NULL;
            return Temp::getsum();
        }


};
//链接：https://www.nowcoder.com/questionTerminal/7a0da8fc483247ff8800059e12d7caf1
//来源：牛客网

class Solution1 {
public:
    int Sum_Solution(int n) {
        bool a[n][n+1];
        return sizeof(a)>>1;
    }
};

int main()
{
    Solution ans;
    unsigned int res=ans.sum(100);
    cout<<res<<endl;
    Solution1 ans1;
    cout<<ans1.Sum_Solution(100);
    return 0;
}

