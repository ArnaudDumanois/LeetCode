//
// Created by arnau on 18/06/2024.
//
vector<int> constructRectangle(int area) {
    int w = sqrt(area);
    while (area % w != 0) w--;
    return {area / w, w};
}