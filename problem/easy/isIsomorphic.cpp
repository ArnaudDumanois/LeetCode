//
// Created by arnau on 11/06/2024.
//
bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    unordered_map<char, char> s2t;
    unordered_map<char, char> t2s;
    for (int i = 0; i < s.size(); i++) {
        if (s2t.find(s[i]) == s2t.end() && t2s.find(t[i]) == t2s.end()) {
            s2t[s[i]] = t[i];
            t2s[t[i]] = s[i];
        } else if (s2t[s[i]] != t[i] || t2s[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}