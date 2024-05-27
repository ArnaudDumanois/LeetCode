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

bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    targetSum -= root->val;
    if (!root->left && !root->right) return targetSum == 0;
    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}