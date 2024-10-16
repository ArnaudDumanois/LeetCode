class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        n = n ^ (n >> 1) # on fait un xor entre n et n décalé de 1 bit vers la droite
        if n & (n + 1) == 0: # si n et n+1 sont égaux à 0 alors on retourne True
            return True