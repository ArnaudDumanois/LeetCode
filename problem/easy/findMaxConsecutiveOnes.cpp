//
// Created by arnau on 18/06/2024.
//
int findMaxConsecutiveOnes(std::vector<int>& nums) {
    int max = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            if (count > max) max = count;
        } else {
            count = 0;
        }
    }
    return max;
}