from typing import List


class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        xy = xz = yz = 0
        for i in range (len(grid)):
            xy += len(grid[i]) - grid[i].count(0)
            xz += max(grid[i])
            yz += max([grid[j][i] for j in range(len(grid))])
        return xy + xz + yz

test = Solution()
print(test.projectionArea([[1,2],[3,4]]))