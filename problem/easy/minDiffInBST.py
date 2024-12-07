from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        self.minDiff = float('inf')
        self.prev = None
        self.in_order(root)
        return self.minDiff


    def in_order(self, node: Optional[TreeNode]) -> int:
        if not node:
            return

        self.in_order(node.left)

        if self.prev is not None:
            self.minDiff = min(self.minDiff, node.val - self.prev)

        self.prev = node.val
        self.in_order(node.right)







