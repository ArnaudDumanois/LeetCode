from typing import List

class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for row in image:
            row.reverse()
            for i in range(len(row)):
                row[i] = 1 - row[i]
        return image


test = Solution()
print(test.flipAndInvertImage([[1,1,0],[1,0,1],[0,0,0]]))  # [[1,0,0],[0,1,0],[1,1,1]]