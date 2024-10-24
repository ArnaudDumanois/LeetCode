from typing import List


class Solution:
    def sort(self, arr: List[str]) -> List[str]:
        if len(arr) <= 1:  # Condition d'arrêt, si la liste a 0 ou 1 élément, elle est déjà triée
            return arr
        else:
            pivot = arr[len(arr) // 2]  # Choix du pivot, ici on prend l'élément du milieu
            left = [x for x in arr if x < pivot]  # Sous-liste des éléments plus petits que le pivot
            middle = [x for x in arr if x == pivot]  # Sous-liste des éléments égaux au pivot
            right = [x for x in arr if x > pivot]  # Sous-liste des éléments plus grands que le pivot
            # Appel récursif sur les sous-listes left et right
            return self.sort(left) + middle + self.sort(right)

    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        self.sort(letters)
        letters.sort()
        print(letters)
        for i in range(0,len(letters)):
            if letters[i] > target:
                return letters[i]
        return letters[0]
