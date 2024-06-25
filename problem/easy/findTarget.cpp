//
// Created by arnau on 25/06/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool findTarget(TreeNode* root, int k) {
    unordered_set<int> s;
    return dfs(root, k, s);
}

bool dfs(TreeNode* root, int k, unordered_set<int>& s) {
    if (root == NULL) return false;
    if (s.count(k - root->val)) return true;
    s.insert(root->val);
    return dfs(root->left, k, s) || dfs(root->right, k, s);
}