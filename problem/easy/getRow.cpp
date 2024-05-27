//
// Created by arnau on 27/05/2024.
//
#include <vector>
vector<int> getRow(int rowIndex) {
    vector<int> result(rowIndex + 1, 1);
    long long n=rowIndex, c=1, x=1;

    for (int i=0; i <= rowIndex/2; i++) {
        result[i] = result[rowIndex - i] = x;
        x = x * n-- / c++;
    }
    return result;
}