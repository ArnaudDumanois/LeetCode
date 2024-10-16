class Solution:
    # left et right sont les indices de début et de fin de la sous-chaîne
    def is_palindrome(self, s: str, left: int, right: int) -> bool:
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1

        return True

    def validPalindrome(self, s: str) -> bool:
        if not s:
            return False

        left = 0
        right = len(s) - 1
        while left < right:
            if s[left] != s[right]:
                # du coup je verifie juste que en supprimant un caractère, la sous-chaîne restante est un palindrome
                # suprrimer = regarder l'indice suivant ou précédent
                return self.is_palindrome(s, left+1, right) or self.is_palindrome(s, left, right-1)
            left += 1
            right -= 1

        return True
