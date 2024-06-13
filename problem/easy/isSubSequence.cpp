//
// Created by arnau on 13/06/2024.
//
bool isSubsequence(string s, string t) {
    int i = 0;
    for (char c : t) {
        if (c == s[i]) {
            i++;
        }
    }
    return i == s.size();
}