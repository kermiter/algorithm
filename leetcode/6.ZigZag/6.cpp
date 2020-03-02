#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int sz = s.size();
        vector<string> row(min(numRows, sz));
        int flag = -1;
        int rowId = 0;
        for (char c : s) {
            row[rowId].push_back(c);
            if (rowId == 0 || rowId == numRows-1) {
                flag = -1 * flag;
            }
            rowId += flag;
        }
        string res;
        for (string str: row) {
            res += str;
        }
        return res;
    }


};
int main() {
    string s = "leetcodeis";
    cout << "src str: " << s << endl;
    Solution sl;
    cout << "after convert:";
    cout << sl.convert(s, 3) << endl;
    return 0;
}
