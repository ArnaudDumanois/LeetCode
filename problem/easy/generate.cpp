//
// Created by arnau on 27/05/2024.
//
#include <vector>
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result(numRows);
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row);
    }
    return result;
}