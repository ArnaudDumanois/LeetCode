class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        words = sentence.split()
        res = ""
        for index, w in enumerate(words):
            if w[0].lower() in "aeiou":
                res += w + "ma"
            else:
                res += w[1:] + w[0] + "ma"
            res += (index+1) * 'a'
            if index < len(words) - 1:
                res += " "

        return res