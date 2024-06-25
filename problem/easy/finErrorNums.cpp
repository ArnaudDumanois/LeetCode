//
// Created by arnau on 25/06/2024.
//
vector<int> findErrorNums(vector<int>& nums) {
    vector<int> res(2);
    for (int i = 0; i < nums.size(); i++) {
        if (nums[abs(nums[i]) - 1] < 0) res[0] = abs(nums[i]);
        else nums[abs(nums[i]) - 1] *= -1;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) res[1] = i + 1;
    }
    return res;
}