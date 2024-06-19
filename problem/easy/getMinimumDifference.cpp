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

int getMinimumDifference(TreeNode* root) {
    int res = INT_MAX, pre = -1;
    dfs(root, pre, res);
    return res;
}

void dfs(TreeNode* root, int& pre, int& res) {
    if (root == nullptr) return;
    dfs(root->left, pre, res);
    if (pre != -1) res = std::min(res, root->val - pre);
    pre = root->val;
    dfs(root->right, pre, res);
}

// a better solution
int getMinimumDifference(TreeNode* root) {
    int res = INT_MAX, pre = -1;
    std::stack<TreeNode*> stack;
    TreeNode* node = root;
    while (node != nullptr || !stack.empty()) {
        while (node != nullptr) {
            stack.push(node);
            node = node->left;
        }
        node = stack.top();
        stack.pop();
        if (pre != -1) res = std::min(res, node->val - pre);
        pre = node->val;
        node = node->right;
    }
    return res;
}