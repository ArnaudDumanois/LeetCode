//
// Created by arnau on 16/06/2024.
//
string licenseKeyFormatting(string s, int k) {
    string res;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != '-') {
            res += toupper(s[i]);
            if (res.size() % (k + 1) == k) {
                res += '-';
            }
        }
    }
    if (!res.empty() && res.back() == '-') {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
    return res;
}