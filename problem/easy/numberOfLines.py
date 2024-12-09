from typing import List

class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        lines = 1
        width = 0
        for c in s:
            width += widths[ord(c) - 97]
            if width > 100:
                lines += 1
                width = widths[ord(c) - 97]
        return [lines, width]