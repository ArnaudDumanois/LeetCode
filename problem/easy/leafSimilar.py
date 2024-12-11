from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def dfs(node, leaves):
            if not node:
                return
            if not node.left and not node.right:
                leaves.append(node.val)
            dfs(node.left, leaves)
            dfs(node.right, leaves)
        leaves1 = []
        leaves2 = []
        dfs(root1, leaves1)
        dfs(root2, leaves2)
        return leaves1 == leaves2