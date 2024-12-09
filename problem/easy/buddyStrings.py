class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        # Vérifier les longueurs
        if len(s) != len(goal):
            return False

        # Si s et goal sont identiques, vérifier les doublons
        if s == goal:
            return len(set(s)) < len(s)

        # Trouver les indices où s et goal diffèrent
        save = []
        for i in range(len(s)):
            if s[i] != goal[i]:
                save.append(i)

        # Vérifier si exactement deux indices diffèrent et peuvent être échangés
        if len(save) == 2 and s[save[0]] == goal[save[1]] and s[save[1]] == goal[save[0]]:
            return True

        # Sinon, retour false
        return False
