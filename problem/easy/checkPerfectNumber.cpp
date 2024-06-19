//
// Created by arnau on 19/06/2024.
//
bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num;
}

// complexity: O(sqrt(n)) where n is the input number

