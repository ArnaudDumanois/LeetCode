//
// Created by arnau on 11/06/2024.
//
vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
    if (nums.empty()) return res;
    int start = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1] + 1) {
            if (nums[i - 1] == start) {
                res.push_back(to_string(start));
            } else {
                res.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
            }
            start = nums[i];
        }
    }
    if (nums[nums.size() - 1] == start) {
        res.push_back(to_string(start));
    } else {
        res.push_back(to_string(start) + "->" + to_string(nums[nums.size() - 1]));
    }
    return res;
}