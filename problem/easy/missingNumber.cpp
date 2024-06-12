//
// Created by arnau on 12/06/2024.
//
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalSum = n * (n + 1) / 2;
    int arraySum = accumulate(nums.begin(), nums.end(), 0);
    return totalSum - arraySum;
}

