#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
class Solution{
    public:
        /*
         *
         *Given a matrix consists of 0 and 1, find the distance of the nearest 0 for each cell.

        The distance between two adjacent cells is 1.
Example 1: 
Input:

0 0 0
0 1 0
0 0 0
Output:
0 0 0
0 1 0
0 0 0
Example 2: 
Input:

0 0 0
0 1 0
1 1 1
Output:
0 0 0
0 1 0
1 2 1

         *
         *
         *
         *
         *
         * */
        vector<vector<int> > updateMatrix(vector<vector<int> >&matrix)
        {
            vector<vector<int> > res;
            if(matrix.size()<=0)
                return res;
            int m=matrix.size(),n=matrix[0].size();
            //存储上下左右四个方向
            vector<pair<int,int> >dir({{0,1},{1,0},{-1,0},{0,-1}});
            queue<pair<int,int> >q;
            for (int i=0; i<m; i++)
                for(int j=0;j<n;j++)
                    if(matrix[i][j])
                        matrix[i][j]=INT_MAX;
                    else
                        q.push({i,j});
           //以自身去更新四周元素的距离 
            while(!q.empty())
            {
                auto p=q.front();
                q.pop();
                for (auto x: dir)
                {
                    int r = p.first+x.first;
                    int c = p.second+x.second;
                    if(r<0||c<0||r>=m||c>=n) continue;
                    if (matrix[r][c]>=matrix[p.first][p.second]+1)
                    {
                        matrix[r][c]=matrix[p.first][p.second]+1;
                        q.push({r,c});
                    
                    }
                
                }
            
            
            }

            return matrix;
        }


};
int main()
{
    Solution s=Solution();
    vector<vector<int> >matrix({{0,0,0},{0,1,0},{1,1,1}});
    s.updateMatrix(matrix);
    for(auto mat: matrix)
    {   for (auto x: mat)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }


    return 0;
}
