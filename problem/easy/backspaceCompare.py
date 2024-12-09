from numpy.ma.core import equal


class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def build(s: str) -> str:
            stack = []
            for c in s:
                if c != '#':
                    stack.append(c)
                else:
                    stack.pop()
            return "".join(stack)
        return build(s) == build(t)