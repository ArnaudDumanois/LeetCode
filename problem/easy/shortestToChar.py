from typing import List


class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        res = [0 if s[i] == c else n for i in range(n)]
        for i in range(1, n):
            res[i] = min(res[i], res[i - 1] + 1)
        for i in range(n - 2, -1, -1):
            res[i] = min(res[i], res[i + 1] + 1)
        return res
