01背包其实不是这种解法的重点，重点是怎么把题目转化成求解01背包的形式。

如果只是单纯的求解和为某个S的组合个数，那就是01背包。。。

但是这题目中不仅有加，还有减，就得进行一个转化了。

思路就是把整个集合看成两个子集，Q表示整个集合，P表示正数子集，N表示负数子集， T表示目标和，用S(X)S(X)表示集合的求和函数，集合中均为非负数，N集合是指选中这部分元素作为负数子集。

S(P) - S(N) = T
S(P)−S(N)=T

S(P) + S(N) + S(P) - S(N) = T + S(P) + S(N)
S(P)+S(N)+S(P)−S(N)=T+S(P)+S(N)

2S(P) = S(Q) + T
2S(P)=S(Q)+T

也就是：正数集的和的两倍 == 等于目标和 + 序列总和

所以问题就转换成了，找到一个正数集P，其和的两倍等于目标和+序列总和。。。

简单吧，完全就是01背包了嘛！！！

对于01背包，其实我都差不多背下来了，你会发现背了以后，写着写着，就理解了。

需要注意的是，虽然序列总和不超过1000，但是S可是会接近int的上界。。。很容易出现超过整型范围的操作。

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        long sum = 0;
        for (const int &it : nums) sum += it;
        if ((S + sum) % 2 == 1 || S > sum) return 0;
        S = (S + sum) / 2;
        int *dp = new int[S + 1];
        memset(dp, 0, (S + 1) * sizeof(int));
        dp[0] = 1;
        for (const int &it : nums) {
            for (int j = S; j >= it; j--)
                dp[j] += dp[j - it];
        }
        int ans = dp[S];
        delete[] dp;
        return ans;
    }
};

作者：bao-bao-ke-guai-liao
链接：https://leetcode-cn.com/problems/target-sum/solution/c-dfshe-01bei-bao-by-bao-bao-ke-guai-liao/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
