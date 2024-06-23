//
// Created by arnau on 23/06/2024.
//
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    std::unordered_map<string, int> index;
    for (int i = 0; i < list1.size(); i++) {
        index[list1[i]] = i;
    }
    int minSum = INT_MAX;
    std::vector<string> res;
    for (int i = 0; i < list2.size(); i++) {
        if (index.count(list2[i])) {
            int sum = i + index[list2[i]];
            if (sum < minSum) {
                minSum = sum;
                res.clear();
                res.push_back(list2[i]);
            } else if (sum == minSum) {
                res.push_back(list2[i]);
            }
        }
    }
    return res;
}