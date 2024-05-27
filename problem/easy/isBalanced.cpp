//
// Created by arnau on 27/05/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isBalanced(TreeNode* root) {
    if (!root) return true;

    return isBalanced(root, 0) != -1;
}

int isBalanced(TreeNode* root, int depth) {
    if (!root) return depth;

    int leftDepth = isBalanced(root->left, depth + 1);
    int rightDepth = isBalanced(root->right, depth + 1);

    if (leftDepth == -1 || rightDepth == -1 || abs(leftDepth - rightDepth) > 1) return -1;

    return max(leftDepth, rightDepth);
}