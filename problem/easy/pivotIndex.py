from typing import List
from wsgiref.util import request_uri


class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        left_sum = 0
        for i in range(0,len(nums)):
            if left_sum == total - left_sum - nums[i]:
                return i
            left_sum += nums[i]
        return -1



test = Solution()
print(test.pivotIndex([1,7,3,6,5,6]))
print(test.pivotIndex([2,1,-1]))