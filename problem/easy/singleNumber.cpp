//
// Created by arnau on 06/06/2024.
//
int singleNumber(std::vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        res ^= nums[i];
    }
    return res;
}