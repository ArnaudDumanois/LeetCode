//
// Created by arnau on 11/06/2024.
//
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end() && i - m[nums[i]] <= k) {
            return true;
        }
        m[nums[i]] = i;
    }
    return false;
}