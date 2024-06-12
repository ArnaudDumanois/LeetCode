//
// Created by arnau on 12/06/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> res;
    if (!root) return res;
    if (!root->left && !root->right) {
        res.push_back(to_string(root->val));
        return res;
    }
    vector<string> left = binaryTreePaths(root->left);
    for (string s : left) {
        res.push_back(to_string(root->val) + "->" + s);
    }
    vector<string> right = binaryTreePaths(root->right);
    for (string s : right) {
        res.push_back(to_string(root->val) + "->" + s);
    }
    return res;
}