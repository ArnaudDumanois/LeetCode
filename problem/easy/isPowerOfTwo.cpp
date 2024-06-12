//
// Created by arnau on 12/06/2024.
//
bool isPowerOfTwo(int n) {
    if (n == 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

// a Snob version
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}