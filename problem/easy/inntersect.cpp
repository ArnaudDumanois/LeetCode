//
// Created by arnau on 13/06/2024.
//
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> m;
    vector<int> res;
    for (int num : nums1) {
        m[num]++;
    }
    for (int num : nums2) {
        if (m[num]-- > 0) {
            res.push_back(num);
        }
    }
    return res;
}

// a better solution in O(n) time and O(1) space
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> res;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            res.push_back(nums1[i]);
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return res;
}
