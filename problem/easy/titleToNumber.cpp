//
// Created by arnau on 06/06/2024.
//
int titleToNumber(string columnTitle) {
    int res = 0;
    for (char c : columnTitle) {
        res = res * 26 + (c - 'A' + 1);
    }
    return res;
}