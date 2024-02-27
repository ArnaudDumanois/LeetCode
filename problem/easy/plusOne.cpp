//
// Created by arnau on 25/02/2024.
//
std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    for (int d : std::vector<int>(digits.rbegin(), digits.rend())) {
        if (d == 9) {
            digits[n - 1] = 0;
            n--;
        } else {
            digits[n - 1] = d + 1;
            return digits;
        }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
}