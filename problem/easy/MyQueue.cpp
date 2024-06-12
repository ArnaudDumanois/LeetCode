//
// Created by arnau on 12/06/2024.
//
class MyQueue {
private:
    std::stack<int> s1, s2;

    void moveElements() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    MyQueue() {
    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        moveElements();
        int top = s2.top();
        s2.pop();
        return top;
    }

    int peek() {
        moveElements();
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};