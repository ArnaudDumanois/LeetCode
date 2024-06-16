//
// Created by arnau on 16/06/2024.
//
int countSegments(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ') {
            res++;
        }
    }
    return res;