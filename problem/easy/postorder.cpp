//
// Created by arnau on 19/06/2024.
//
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

vector<int> postorder(Node* root) {
    vector<int> res;
    stack<Node*> s;
    if (root) {
        s.push(root);
    }
    while (!s.empty()) {
        Node* node = s.top();
        s.pop();
        res.push_back(node->val);
        for (Node* child : node->children) {
            s.push(child);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}