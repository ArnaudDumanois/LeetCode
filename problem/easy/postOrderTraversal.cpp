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
std::vector<int> postorderTraversal(TreeNode* root) {
    std::vector<int> res;
    std::stack<TreeNode*> s;
    TreeNode* last = NULL;
    while (root != NULL || !s.empty()) {
        if (root != NULL) {
            s.push(root);
            root = root->left;
        } else {
            TreeNode* node = s.top();
            if (node->right != NULL && node->right != last) {
                root = node->right;
            } else {
                res.push_back(node->val);
                last = node;
                s.pop();
            }
        }
    }
    return res;
}