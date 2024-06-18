//
// Created by arnau on 18/06/2024.
//
int hammingDistance(int x, int y) {
    int z = x ^ y; // XOR
    int count = 0;
    while (z) {
        count += z & 1;
        z >>= 1;
    }
    return count;
}

// for fun in python you can do it int one line
def hammingDistance(x, y):
    return bin(x ^ y).count('1')

// or
def hammingDistance(x, y):
    return len([i for i in filter(lambda a: a[0] != a[1], zip(x, y))])

// in C++ you can do it in one line too
int hammingDistance(int x, int y) {
    return std::bitset<32>(x ^ y).count();
}

// in C#
int HammingDistance(int x, int y) {
    return Convert.ToString(x ^ y, 2).Count(c => c == '1');
}