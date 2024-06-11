//
// Created by arnau on 11/06/2024.
//
class MyStack {
private:
    std::deque<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        q.push_back(x);
    }

    int pop() {
        int x = q.back();
        q.pop_back();
        return x;
    }

    int top() {
        return q.back();
    }

    bool empty() {
        return q.empty();
    }
};
