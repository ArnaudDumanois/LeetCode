from typing import List
from wsgiref.util import request_uri


class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        size = len(cost)
        if size == 0:
            return 0
        if size == 1:
            return cost[0]

        dp = [0] * size
        dp[0] = cost[0]
        dp[1] = cost[1]

        for i in range(2, size):
            dp[i] = cost[i] + min(dp[i-1], dp[i-2])

        return min(dp[-1], dp[-2])

test = Solution()
print(test.minCostClimbingStairs([10,15,20]))
print(test.minCostClimbingStairs([1,100,1,1,1,100,1,1,100,1]))