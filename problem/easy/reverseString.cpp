//
// Created by arnau on 13/06/2024.
//
void reverseString(vector<char>& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
}