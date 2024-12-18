//
// Created by arnau on 26/05/2024.
//
#include <vector>
int pivotIndex(<vector<int>& nums) {
    int sum = 0, leftSum = 0;
    for (int num : nums) sum += num;
    for (int i = 0; i < nums.size(); i++) {
        if (leftSum == sum - leftSum - nums[i]) return i;
        leftSum += nums[i];
    }
    return -1;
}