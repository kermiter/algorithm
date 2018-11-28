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
        int longestConsecutive(vector<int> &num) {
            unordered_set<int>record(num.begin(),num.end());
            int res=0;
            for(int n:num)
            {
                if(record.find(n)==record.end()) continue;
                record.erase(n);
                int prev=n-1,next=n+1;
                while(record.find(prev)!=record.end()) record.erase(prev--);
                while(record.find(next)!=record.end()) record.erase(next++);
                res=max(res,next-prev-1);
            }
            return res;
        
        }

};
int main()
{
    vector<int>num({100,4,200,2,3,1});
    Solution ans;
    int res;
    res=ans.longestConsecutive(num);
    cout<<res<<endl;

    return 0;
}
/*
use a hash map to store boundary information of consecutive sequence for each element; there are 4 cases when a new element i reached:

neither i+1 nor i-1 has been seen: m[i]=1;

both i+1 and i-1 have been seen: extend m[i+m[i+1]] and m[i-m[i-1]] to each other;

only i+1 has been seen: extend m[i+m[i+1]] and m[i] to each other;

only i-1 has been seen: extend m[i-m[i-1]] and m[i] to each other.

int longestConsecutive(vector<int> &num) {
    unordered_map<int, int> m;
    int r = 0;
    for (int i : num) {
        if (m[i]) continue;
        r = max(r, m[i] = m[i + m[i + 1]] = m[i - m[i - 1]] = m[i + 1] + m[i - 1] + 1);
    }
    return r;
}
*/
