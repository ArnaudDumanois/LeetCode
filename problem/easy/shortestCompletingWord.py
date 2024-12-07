from typing import List, Dict


class Solution:
    def isCompletedWrd(self, word: str, dict: Dict[str, int]) -> bool:
        for letter in dict.keys():
            if word.count(letter) < dict.get(letter):
                return False
        return True

    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        # Clean la plaque
        licensePlate = licensePlate.strip()
        dict = {}
        # Avoir un dico de lettre
        for i in licensePlate:
            if i.isalpha():
                i = i.lower()
                if i in dict:
                    dict[i] += 1
                else:
                    dict[i] = 1

        shortest_node = None
        for i in words:
            if self.isCompletedWrd(i.lower(),dict) == True:
                if shortest_node == None or len(i) < len(shortest_node):
                    shortest_node = i
        return shortest_node





test = Solution()
print(test.shortestCompletingWord("1s3 PSt", ["step","steps","stripe","stepple"]))