//
// Created by arnau on 19/06/2024.
//
vector<string> findRelativeRanks(vector<int>& score) {
    std::vector<std::pair<int, int>> scores;
    for (int i = 0; i < score.size(); i++) {
        scores.push_back({score[i], i});
    }
    std::sort(scores.begin(), scores.end(), std::greater<std::pair<int, int>>());
    std::vector<std::string> result(score.size());
    for (int i = 0; i < scores.size(); i++) {
        if (i == 0) result[scores[i].second] = "Gold Medal";
        else if (i == 1) result[scores[i].second] = "Silver Medal";
        else if (i == 2) result[scores[i].second] = "Bronze Medal";
        else result[scores[i].second] = std::to_string(i + 1);
    }
    return result;
}