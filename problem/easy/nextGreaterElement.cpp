//
// Created by arnau on 26/05/2024.
//
#include <vector>
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++) {
        int j = 0;
        while (nums2[j] != nums1[i]) j++;
        while (j < nums2.size() && nums2[j] <= nums1[i]) j++;
        if (j == nums2.size()) res.push_back(-1);
        else res.push_back(nums2[j]);
    }
    return res;
}