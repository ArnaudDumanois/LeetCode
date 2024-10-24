from typing import List

class Solution:
    def isSelfDeviding(self, num: int) -> bool:
        for digit in str(num):
            if int(digit) == 0 or num % int(digit) > 0:
                return False
        return True

    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []
        for i in range(left, right+1):
            if self.isSelfDeviding(i) == True:
                res.append(i)
        return res

test = Solution()
print(test.selfDividingNumbers(1,22))
