
public int lengthOfLongestSubstringTwoDistinct(String s) {
int max=0;
HashMap<Character,Integer> map = new HashMap<Character, Integer>();
int start=0;
for(int i=0; i<s.length(); i++){
char c = s.charAt(i);
if(map.containsKey(c)){
map.put(c, map.get(c)+1);
}else{
map.put(c,1);
}
if(map.size()>2){
max = Math.max(max, i-start);
while(map.size()>2){
char t = s.charAt(start);
int count = map.get(t);
if(count>1){
map.put(t, count-1);
}else{
map.remove(t);
}
start++;
}
}
}
max = Math.max(max, s.length()-start);
return max;
}


/*
class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int res = 0, left = 0;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
            while (m.size() > 2) {
                if (--m[s[left]] == 0) m.erase(s[left]);
                ++left;
            }
            res = max(res, i - left + 1);
        }
        return res;
    }
};
Given a string S, find the length of the longest substring T that contains at most two distinct characters.
For example,
Given S = “eceba”,
T is “ece” which its length is 3.

**/
