//
// Created by arnau on 13/06/2024.
//
bool isPerfectSquare(int num) {
    long long l = 0, r = num;
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        long long sq = mid * mid;
        if (sq == num) {
            return true;
        } else if (sq < num) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

// a better solution in O(1) time
bool isPerfectSquare(int num) {
    long long x = num;
    while (x * x > num) {
        x = (x + num / x) / 2;
    }
    return x * x == num;
}