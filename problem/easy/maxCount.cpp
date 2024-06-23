//
// Created by arnau on 23/06/2024.
//
int maxCount(int m, int n, std::vector<std::vector<int>>& ops) {
    int minA = m;
    int minB = n;
    for (auto& op : ops) {
        minA = std::min(minA, op[0]);
        minB = std::min(minB, op[1]);
    }
    return minA * minB;
}