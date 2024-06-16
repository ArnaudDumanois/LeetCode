//
// Created by arnau on 16/06/2024.
//
int findComplement(int num) {
    int mask = 1;
    while (mask < num) {
        mask = (mask << 1) | 1;
    }
    return num ^ mask;
}