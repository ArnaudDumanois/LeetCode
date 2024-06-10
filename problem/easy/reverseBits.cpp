//
// Created by arnau on 10/06/2024.
//
uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
        res = (res << 1) + (n & 1);
        n >>= 1;
    }
    return res;
}