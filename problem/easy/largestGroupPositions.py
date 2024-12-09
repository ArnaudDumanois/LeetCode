from typing import List


class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        res = []
        i = 0
        while i < len(s):
            j = i
            while j < len(s) and s[j] == s[i]:
                j += 1
            if j - i >= 3:
                res.append([i, j - 1])
            i = j
        return res
            

