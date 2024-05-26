//
// Created by arnau on 26/05/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode* root, unordered_map<TreeNode*, int>& memo) {
    if (!root) return 0;
    if (memo.find(root) != memo.end()) return memo[root];

    int leftDepth = maxDepth(root->left, memo);
    int rightDepth = maxDepth(root->right, memo);
    int depth = 1 + max(leftDepth, rightDepth);

    memo[root] = depth;
    return depth;
}

int maxDepth(TreeNode* root) {
    if (!root) return 0;

    unordered_map<TreeNode*, int> depthMap;
    stack<TreeNode*> nodeStack;
    nodeStack.push(root);

    int maxDepth = 0;

    while (!nodeStack.empty()) {
        TreeNode* node = nodeStack.top();
        nodeStack.pop();

        if (!node) continue;

        if (depthMap.find(node) != depthMap.end()) {
            maxDepth = max(maxDepth, depthMap[node]);
            continue;
        }

        if (node->left == nullptr && node->right == nullptr) {
            depthMap[node] = 1;
        } else {
            depthMap[node] = 0;
            nodeStack.push(node);
            if (node->left) nodeStack.push(node->left);
            if (node->right) nodeStack.push(node->right);
        }

        if (depthMap[node] == 0) {
            int leftDepth = node->left ? depthMap[node->left] : 0;
            int rightDepth = node->right ? depthMap[node->right] : 0;
            depthMap[node] = 1 + max(leftDepth, rightDepth);
            maxDepth = max(maxDepth, depthMap[node]);
        }
    }

    return maxDepth;
}