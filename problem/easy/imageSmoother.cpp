//
// Created by arnau on 25/06/2024.
//
vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int m = img.size(), n = img[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    vector<int> dirs = {-1, 0, 1};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0, count = 0;
            for (int x : dirs) {
                for (int y : dirs) {
                    int ni = i + x, nj = j + y;
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                        sum += img[ni][nj];
                        count++;
                    }
                }
            }
            res[i][j] = sum / count;
        }
    }
    return res;
}