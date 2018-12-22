#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
class Solution{
    private:
        //vector<vector<bool> >flag;
    public:
        bool exist(vector<vector<char>>& board, string word) {
          int row=board.size(),column=board[0].size();
          vector<vector<bool> >flag(row,vector<bool>(column,false));

          for(int i=0;i<row;i++)
              for(int j=0; j<column;j++)
                  if(search(board,i,j,word,0,flag))
                      return true;
          return false;
    }
        bool search(vector<vector<char>>& board,int i,int j,string word,int start,vector<vector<bool> >&flag)
        {
        
            if(start>=word.size()) return true;

            if(i<0||i>=board.size()||j<0||j>=board[0].size()) return false;
            if(!flag[i][j]&&board[i][j]==word[start])
            {
                flag[i][j]=true;
                bool isExist= search(board,i+1,j,word,start+1,flag) ||
                              search(board,i,j+1,word,start+1,flag) ||
                              search(board,i-1,j,word,start+1,flag) ||
                              search(board,i,j-1,word,start+1,flag) ;
                if(!isExist)
                    flag[i][j]=false;
                return isExist;
            }
            return false;
        
        }
};
int main()
{
    TreeNode root(1),left(2),right(3),lleft(4),lright(5);
    root.left=&left;
    root.right=&right;
    left.left=&lleft;
    left.right=&lright;
    Solution ans;
    string word="ABCCED";
    string word1="SeE";
    vector<vector<char> >board({{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}});
    bool isExist=ans.exist(board,word1);
    cout<<isExist<<endl;

    return 0;
}
