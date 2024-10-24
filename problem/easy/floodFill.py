from typing import List


class Solution:
    def fill(self, image, sr, sc, start_color, color):
        if sr < 0 or sr >= len(image) or sc < 0 or sc >= len(image[0]) or image[sr][sc] != start_color:
            return
        image[sr][sc] = color
        self.fill(image, sr + 1, sc, start_color, color)
        self.fill(image, sr - 1, sc, start_color, color)
        self.fill(image, sr, sc + 1, start_color, color)
        self.fill(image, sr, sc - 1, start_color, color)

    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        start_color = image[sr][sc]
        if start_color == color:
            return image
        self.fill(image, sr, sc, start_color, color)
        return image





test = Solution()
print(test.floodFill([[1,1,1],[1,1,0],[1,0,1]],1,1,2))