class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def dfs(self, node, unique_values):
        if node is None:
            return
        unique_values.add(node.val)
        self.dfs(node.left, unique_values)
        self.dfs(node.right, unique_values)

    def findSecondMinimumValue(self, root: TreeNode) -> int:
        unique_values = set()
        self.dfs(root, unique_values)

        if len(unique_values) < 2:
            return -1

        unique_values.remove(min(unique_values))
        return min(unique_values)
