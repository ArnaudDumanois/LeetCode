//
// Created by arnau on 13/06/2024.
//
vector<int> countBits(int n){
    vector<int> res(n+1, 0);
    for (int i = 1; i <= n; i++) {
        res[i] = res[i >> 1] + (i & 1);
    }
    return res;
}

// a better solution is to use the built-in function __builtin_popcount
vector<int> countBits(int n){
    vector<int> res(n+1, 0);
    for (int i = 1; i <= n; i++) {
        res[i] = __builtin_popcount(i);
    }
    return res;
}