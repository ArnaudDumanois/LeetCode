//
// Created by arnau on 12/06/2024.
//
bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}

bool isPowerOfThree(int n){
    if (n == 1) {
        return true;
    }
    else if (n % 3 != 0 || n == 0) {
        return false;
    } else {
        return isPowerOfThree(n / 3);
    }
}