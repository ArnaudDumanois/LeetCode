//
// Created by arnau on 06/06/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <vector>
#include <stack>
std::vector<int> preorderTraversal(TreeNode* root) {
    std::vector<int> res;
    std::stack<TreeNode*> s;
    if (root != NULL) {
        s.push(root);
    }
    while (!s.empty()) {
        TreeNode* node = s.top();
        s.pop();
        res.push_back(node->val);
        if (node->right != NULL) {
            s.push(node->right);
        }
        if (node->left != NULL) {
            s.push(node->left);
        }
    }
    return res;
}
