//
// Created by arnau on 10/06/2024.
//
int hammingWeight(uint32_t n) {
    int res = 0;
    while (n) {
        res += n & 1;
        n >>= 1;
    }
    return res;
}