#!usr/bin/env python
class Solution:
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=set(nums)
        best=1
        for x in nums:
            if x-1 not in nums:
                y=x+1
                while y in nums:
                    y+=1
                best=max(best,y-x)
        return best


nums=[100,4,200,3,1,2]

res=Solution()
long_seq=res.longestConsecutive(nums)
print(long_seq)
