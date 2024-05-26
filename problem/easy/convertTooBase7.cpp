//
// Created by arnau on 26/05/2024.
//
#include <string>
string convertToBase7(int num) {
    if (num == 0) return "0";
    string res = "";
    bool isNegative = num < 0;
    if (isNegative) num = -num;
    while (num) {
        res = to_string(num % 7) + res;
        num /= 7;
    }
    return isNegative ? "-" + res : res;
}
