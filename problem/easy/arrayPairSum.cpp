//
// Created by arnau on 19/06/2024.
//
int arrayPairSum(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }
    return sum;
}