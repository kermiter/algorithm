

/**
 *
 * Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.

 *
 *
 *
 * */
int longestPalindrome(string s) {
    int odds = 0;
    for (char c='A'; c<='z'; c++)
        odds += count(s.begin(), s.end(), c) & 1;
    return s.size() - odds + (odds > 0);
}
class Solution {
public:
    int longestPalindrome(string s) {
     int len_max=0;
     int dict[256]={0};
     for (auto c:s)
         dict[c]++;
     for(auto c:s)
     {
         if(!dict[c]) continue;
         len_max+=dict[c]/2*2;
         if(len_max%2==0&&dict[c]%2==1)
             len_max+=1;
         dict[c]=0;
         
     }
     return len_max;
    }
};
