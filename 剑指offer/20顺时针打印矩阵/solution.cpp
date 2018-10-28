#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        vector<int>printMatrix(vector<vector<int> >&matrix){
            int n=matrix.size(),m=matrix[0].size();
            vector<int>res;
            if(n<=0||m<=0)
            {
            
                return res;
            }

            int layer=(min(n,m)-1)/2+1;
            for(int i=0; i<layer;i++)
            {
                //左->右
                for(int j=i; j<m-i; j++)
                    res.push_back(matrix[i][j]);
                //上->下
                for(int k=i+1;k<n-i;k++)
                    res.push_back(matrix[k][m-i-1]);
                //右——>左,增加n-1-i!=i是排除奇数行，奇数行条件下,由左至右已经遍历过
                for(int l=m-i-1;l-1>=i&&n-1-i!=i;l--)
                    res.push_back(matrix[n-i-1][l-1]);
                //下->上
                for(int h=n-1-i;h-1>i&&m-1-i!=i;h--)
                    res.push_back(matrix[h-1][i]);
                        
            }
        
       return res; 
        
        }


};
int main()
{
    vector<vector<int> >test({{1,2},{3,4}});
    Solution ans=Solution();
    vector<int>res=ans.printMatrix(test);
    cout<<res.size()<<endl;

    for(int i=0;i <res.size();i++)
        cout<<"i:"<<i<<","<<res[i]<<endl;



    return 0;
}

