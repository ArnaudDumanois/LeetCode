class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        def isPrime(n):
            if n < 2:
                return False
            for i in range(2, int(n ** 0.5) + 1):
                if n % i == 0:
                    return False
            return True

        res = 0
        for i in range(left, right + 1):
            if isPrime(bin(i).count('1')):
                res += 1
        return res

test = Solution()
test.countPrimeSetBits(6,10)