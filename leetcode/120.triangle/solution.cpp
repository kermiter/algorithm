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
/*
 *
 [
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).
         *
         *
         *
         * */
        int minimumTotal(vector<vector<int>>& triangle) {
        
            int n=triangle.size();
            for(int i=n-2;i>=0;i--)
                for(int j=0;j<=i;j++)
                {
                    triangle[i][j]=triangle[i][j]+min(triangle[i+1][j],triangle[i+1][j+1]);
                
                }
            return triangle[0][0];
    }

};
int main()
{
    vector<vector<int> >vvec({{2},{3,4},{6,5,7},{4,1,8,3}});
    Solution ans;
    int res=ans.minimumTotal(vvec);
    cout<<res;

    return 0;
}
