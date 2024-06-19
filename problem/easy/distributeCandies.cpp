//
// Created by arnau on 19/06/2024.
//
int distributeCandies(vector<int>& candyType) {
    unordered_set<int> s(candyType.begin(), candyType.end());
    return min(s.size(), candyType.size() / 2);
}