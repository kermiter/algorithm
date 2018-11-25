#include<iostream>
#include<vector>
#include<string>
using namespace std;
//时间复杂度O(n)
//空间复杂度O(m)
class Solution
{
public:
    int maxNum(int num1, int num2)
    {
        return num1 >= num2 ? num1 : num2;
    }
    void maxNonRepetitiveString(string str)
    {
        if (str.empty())
            return;
        //map整形数组一共有10个元素，用来保存0-9数字的最后一次出现的下标
        int map[256];
        //将map数组的所有元素初始化为-1
        for (int i = 0; i < 256; ++i)
            map[i] = -1;

        int begin = 0; //begin用来记录最长无重复子串的起始下标
        int end = 0; //end用来记录最长无重复子串的终止下标
        int current = 0; //current用来记录当前得到的无重复子串长度
        int pre = -1; //pre用来记录当前无重复子串的起始位置-1
        int len = 0; //len用来记录最长无重复子串的长度
        for (int j = 0; j < str.length(); ++j)
        {
            //判断pre在当前字符最后一次出现位置的左边还是右边
            //如果在左边，即pre<map[str[j]]，表示在str[j]的位置已经出现了重复的字符了
            //如果在右边，即pre>=map[str[j]]，表示在str[j]的位置没有出现重复字符
            pre = maxNum(pre, map[str[j]]);
            //计算当前无重复子串的长度
            current = j - pre;
            //比较当前无重复子串长度是否大于最大无重复子串长度
            if (len <= current)
            {
                begin = pre + 1; //更新无重复子串的起始下标
                end = j; //更新无重复子串的终止下标
            }
            len = maxNum(len, current); //更新最长无重复子串的长度
            map[str[j]] = j; //更新str[j]字符最后一次出现的位置下标
        }
        cout<<"begin:"<<begin<<endl;
        cout<<"end:"<<end<<endl;
        //打印最长无重复子串
        for (int k = begin; k <= end; ++k)
            cout << str[k];
    }
};
int main()
{
    Solution ans;
    string num("abcdefadegf");
    ans.maxNonRepetitiveString(num);




    return 0;
}
