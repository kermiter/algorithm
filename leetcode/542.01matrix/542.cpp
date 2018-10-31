#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
class Solution{
    public:
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
