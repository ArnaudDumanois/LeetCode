//
// Created by arnau on 13/06/2024.
//
string toHex(int num) {
    if (num == 0) {
        return "0";
    }
    string res;
    while (num && res.size() < 8) {
        int val = num & 15;
        if (val < 10) {
            res += '0' + val;
        } else {
            res += 'a' + val - 10;
        }
        num >>= 4;
    }
    reverse(res.begin(), res.end());
    return res;
}