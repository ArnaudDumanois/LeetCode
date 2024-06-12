//
// Created by arnau on 12/06/2024.
//
class NumArray {
private:
    vector<int> sum;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        sum = vector<int>(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return sum[right + 1] - sum[left];
    }
}