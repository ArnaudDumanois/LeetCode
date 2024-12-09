from typing import List

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morse_dict = {}
        for word in words:
            morse_word = ''
            for c in word:
                morse_word += morse[ord(c) - 97]
            morse_dict[morse_word] = 1
        return len(morse_dict)
