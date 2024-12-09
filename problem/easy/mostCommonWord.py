from typing import List


class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        paragraph = paragraph.lower()
        for c in "!?',;.":
            paragraph = paragraph.replace(c, " ")

        words = paragraph.split()
        word_count = {}
        for word in words:
            if word not in banned:
                word_count[word] = word_count.get(word, 0) + 1
        return max(word_count, key=word_count.get)
