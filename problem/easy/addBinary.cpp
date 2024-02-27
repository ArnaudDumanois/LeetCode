//
// Created by arnau on 25/02/2024.
//



string addBinary(string a, string b) {
    string result = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }
    if (carry) {
        result = "1" + result;
    }
    return result;
}