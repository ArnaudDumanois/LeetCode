class Solution:
    def binaryGap(self, n: int) -> int:
        binary = bin(n)[2:]
        max_gap = 0
        gap = 0
        for i in binary:
            if i == '1':
                max_gap = max(max_gap, gap)
                gap = 1
            elif i == '0':
                gap += 1
        return max_gap


test = Solution()
print(test.binaryGap(22)) # 2