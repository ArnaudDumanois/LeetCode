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

int minDepth(TreeNode* root) {
    if (!root) return 0;

    stack<TreeNode*> nodeStack;
    stack<int> depthStack;
    nodeStack.push(root);
    depthStack.push(1);

    int minDepth = INT_MAX;

    while (!nodeStack.empty()) {
        TreeNode* node = nodeStack.top();
        nodeStack.pop();
        int depth = depthStack.top();
        depthStack.pop();

        if (!node) continue;

        if (node->left == nullptr && node->right == nullptr) {
            minDepth = min(minDepth, depth);
        } else {
            if (node->left) {
                nodeStack.push(node->left);
                depthStack.push(depth + 1);
            }
            if (node->right) {
                nodeStack.push(node->right);
                depthStack.push(depth + 1);
            }
        }
    }

    return minDepth;
}