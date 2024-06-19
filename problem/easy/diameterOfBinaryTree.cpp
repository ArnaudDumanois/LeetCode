//
// Created by arnau on 19/06/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int diameterOfBinaryTree(TreeNode* root) {
    int res = 0;
    dfs(root, res);
    return res;
}

int dfs(TreeNode* root, int& res) {
    if (root == nullptr) return 0;
    int left = dfs(root->left, res);
    int right = dfs(root->right, res);
    res = std::max(res, left + right);
    return std::max(left, right) + 1;
}