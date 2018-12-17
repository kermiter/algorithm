

class Solution:
    def maxArea(self, height):
        """
        :type height: List[int]
        :rty
        """
        start=0
        end=len(height)-1
        res=0
        while start<end:
            area = min(height[start],height[end])*(end-start)
            res=max(res,area)
            if height[start]<= height[end]:
                start+=1
            else:
                end-=1
        return res
ans = Solution().maxArea([1,8,6,2,5,4,8,3,7])
print(ans)

