//
// Created by arnau on 11/06/2024.
//
bool isHappy(int n) {
    int sum = 0;
    int count = 0;
    while (n != 1) {
        sum = 0;
        while (n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
        count++;
        if (count > 1000) {
            return false;
        }
    }
    return true;
}