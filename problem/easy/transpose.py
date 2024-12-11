from typing import List


class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        res = []
        for i in range(len(matrix[0])):
            res.append([matrix[j][i] for j in range(len(matrix))])
        return res

