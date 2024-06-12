//
// Created by arnau on 12/06/2024.
//
void moveZeroes(vector<int> &nums) {
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        nums[i] = 0;
    }
}

void moveZeroes(vector<int> &nums) {
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[j], nums[i]);
            j++;
        }
    }
}