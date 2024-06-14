//
// Created by arnau on 14/06/2024.
//
int thirdMax(vector<int>& nums) {
    set<int> s;
    for (int num : nums) {
        s.insert(num);
        if (s.size() > 3) {
            s.erase(s.begin());
        }
    }
    return s.size() == 3 ? *s.begin() : *s.rbegin();
}

// if we start by Sorting the array, we can get the third maximum number by checking the third last element of the array
int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    auto it = unique(nums.begin(), nums.end());
    if (it - nums.begin() < 3) {
        return *max_element(nums.begin(), it);
    }
    return *(it - 3);
}