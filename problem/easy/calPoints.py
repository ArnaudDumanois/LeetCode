from plumbum.cli import switch


class Solution:
    def calPoints(self, operations: List[str]) -> int:
        if not operations:
            return 0
        record = []
        for i in operations:
            if i == '+':
                record.append(record[-1] + record[-2])
            if i == 'D':
                record.append(record[-1]*2)
            if i == 'C':
                record.pop()

        return sum(record)
