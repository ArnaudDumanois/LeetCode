class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewel_set = set(jewels)
        cpt = 0
        for jewel in jewel_set:
            cpt += stones.count(jewel)
        return cpt

test = Solution()
print(test.numJewelsInStones("aA","aAAbbbb"))