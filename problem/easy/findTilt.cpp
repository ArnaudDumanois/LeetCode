//
// Created by arnau on 19/06/2024.
//
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


int findTilt(TreeNode* root) {
    int tilt = 0;
    postOrder(root, tilt);
    return tilt;
}

int postOrder(TreeNode* root, int& tilt) {
    if (!root) {
        return 0;
    }
    int left = postOrder(root->left, tilt);
    int right = postOrder(root->right, tilt);
    tilt += abs(left - right);
    return left + right + root->val;
}