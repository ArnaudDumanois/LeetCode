//
// Created by arnau on 18/06/2024.
//
int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
    if (timeSeries.empty()) return 0;
    int total = 0;
    for (int i = 1; i < timeSeries.size(); i++) {
        total += std::min(timeSeries[i] - timeSeries[i - 1], duration);
    }
    return total + duration;
}