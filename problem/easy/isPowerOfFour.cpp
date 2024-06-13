//
// Created by arnau on 13/06/2024.
//
bool isPowerOfFour(int n) {
    return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
}