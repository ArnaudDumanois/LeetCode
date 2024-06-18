//
// Created by arnau on 18/06/2024.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> findMode(TreeNode* root) {
    std::vector<int> result;
    std::unordered_map<int, int> map;
    int max = 0;
    std::function<void(TreeNode*)> inorder = [&](TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        map[node->val]++;
        max = std::max(max, map[node->val]);
        inorder(node->right);
    };
    inorder(root);
    for (auto& [key, value] : map) {
        if (value == max) result.push_back(key);
    }
    return result;
}

