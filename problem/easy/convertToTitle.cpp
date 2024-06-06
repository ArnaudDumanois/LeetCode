//
// Created by arnau on 06/06/2024.
//
string convertToTitle(int n) {
    string res;
    while (n) {
        res = char((n - 1) % 26 + 'A') + res;
        n = (n - 1) / 26;
    }
    return res;
}