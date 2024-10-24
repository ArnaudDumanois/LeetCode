from multiprocessing.reduction import duplicate
from typing import List


class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        sum_n = n * (n + 1) // 2 # sum of 1 to n

        # pour trouver le duplicate et le missing
        # on fait la difference entre la somme de tous les elements et la somme des elements uniques
        duplicate = sum(nums) - sum(set(nums))
        missing = sum_n - sum(set(nums))

        return [duplicate, missing]

solution = Solution()

print(solution.findErrorNums([1, 2, 2, 4]))  # [2, 3]
print(solution.findErrorNums([1, 1]))  # [1, 2]
print(solution.findErrorNums([2,2]))  # [2, 1]
print(solution.findErrorNums([3,2,2]))  # [2, 1]

