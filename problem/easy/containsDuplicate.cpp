//
// Created by arnau on 11/06/2024.
//
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (int num : nums) {
        if (s.find(num) != s.end()) {
            return true;
        }
        s.insert(num);
    }
    return false;
}