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

int maxDepth(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int maxD = 0;
    for (Node* child : root->children) {
        maxD = std::max(maxD, maxDepth(child));
    }

    return maxD + 1;
}

