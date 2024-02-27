//
// Created by arnau on 25/02/2024.
//
#include <iostream>
#include <string>
#include <vector>

std::bool isValid(std::string s) {
    std::vector<char> stack;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push_back(c);
        } else {
            if (stack.empty()) {
                return false;
            }
            if (c == ')' && stack.back() != '(') {
                return false;
            }
            if (c == ']' && stack.back() != '[') {
                return false;
            }
            if (c == '}' && stack.back() != '{') {
                return false;
            }
            stack.pop_back();
        }
    }
    return stack.empty();
}