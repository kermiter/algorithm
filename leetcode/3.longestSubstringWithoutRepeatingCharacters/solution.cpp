/* string="abcdfefsga"
 * return: 
 *  abcdfe
 *  最长不重复的子序列
 *
 *
 *
 * */
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    { int length =0, maxlength=0 , index_begin =0,  index_cur=0;
      vector<int> map (128,-1);
        for(auto i :s)
        {
           if(map[i]<index_begin)
            {
                map[i]=index_cur;
                index_cur++;
                length++;
            }
           else
            {
                index_begin=map[i]+1;
                maxlength= length>maxlength? length:maxlength;
                length=index_cur-map[i];
                map[i]=index_cur;
                index_cur++;
            }

        }
         return length>maxlength? length:maxlength;
}
    
};
