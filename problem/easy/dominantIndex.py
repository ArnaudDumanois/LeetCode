
from typing import List

class Solution:
    def quicksort(self,arr: List[int]) -> List[int]:
        if len(arr) < 1:
            return arr
        else:
            pivot = arr[len(arr) // 2]
            left = [x for x in arr if x < pivot]
            middle = [x for x in arr if x == pivot]
            right = [x for x in arr if x > pivot]
            return self.quicksort(left) + middle + self.quicksort(right)

    def dominantIndex(self, nums: List[int]) -> int:
        sort_nums = self.quicksort(nums)
        print((2*sort_nums[-2]), sort_nums[-1])
        if (2*sort_nums[-2]) <= sort_nums[-1]:
            return nums.index(sort_nums[-1])
        else:
            return -1

test = Solution()
print(test.dominantIndex([3,6,1,0])) # 1
print(test.dominantIndex([1,2,3,4])) # 3