class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False

        if s == goal:
            return len(set(s)) < len(s)

        save = []
        for i in range(len(s)):
            if s[i] != goal[i]:
                save.append(i)

        if len(save) == 2 and s[save[0]] == goal[save[1]] and s[save[1]] == goal[save[0]]:
            return True
        return False
