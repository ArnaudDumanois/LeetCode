class Solution:
    def countBinarySubstrings(self, s: str) -> int:
            # prev: nombre de caractères consécutifs précédents
            # cur: nombre de caractères consécutifs actuels
            res, prev, cur = 0, 0, 1
            for i in range(1, len(s)):
                # si s[i] est égal à s[i-1] alors on incrémente cur
                if s[i] == s[i-1]:
                    cur += 1
                else:
                    # sinon on incrémente res avec le minimum entre prev et cur
                    res += min(prev, cur)

                    prev, cur = cur, 1
            return res + min(prev, cur)