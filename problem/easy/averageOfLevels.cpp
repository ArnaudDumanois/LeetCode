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

vector<double> averageOfLevels(TreeNode* root) {
    vector<double> res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        long sum = 0, count = 0;
        queue<TreeNode*> temp;
        while (!q.empty()) {
            TreeNode* n = q.front();
            q.pop();
            sum += n->val;
            count++;
            if (n->left) temp.push(n->left);
            if (n->right) temp.push(n->right);
        }
        q = temp;
        res.push_back(sum * 1.0 / count);
    }
    return res;
}