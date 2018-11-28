#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution{
    public:
        void rotate(vector<vector<int>>& matrix) {
            int R=matrix.size();
            //int C=matrix[0].size();
            //对角线互换
            for(int i=0;i<R;i++)
            {
                for(int j=0;j<i;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }

            }
            //关于中心线互换,完成顺时针旋转90。
            for(int i=0;i<R;i++)
            {
                for(int j=0;j<R/2;j++)
                {
                
                    swap(matrix[i][j],matrix[i][R-j-1]);
                }   
            
            }

            for(vector<int>vec: matrix)
            {    for(int n:vec)
                    cout<<n<<",";
                 cout<<endl;
            }
    }

};
int main()
{
    vector<vector<int> >vvec({{1,2,3},{4,5,6},{7,8,9}});
    Solution res;
    res.rotate(vvec);

    return 0;
}
