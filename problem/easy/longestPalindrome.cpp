//
// Created by arnau on 14/06/2024.
//
int longestPalindrome(string s) {
    unordered_map<char, int> m;
    for (char c : s) {
        m[c]++;
    }
    int res = 0;
    bool odd = false;
    for (auto p : m) {
        res += p.second;
        if (p.second % 2 == 1) {
            res--;
            odd = true;
        }
    }
    return res + odd;
}