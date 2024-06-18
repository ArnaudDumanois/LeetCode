//
// Created by arnau on 18/06/2024.
//
int islandPerimeter(std::vector<std::vector<int>>& grid) {
    int perimeter = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                perimeter += 4;
                if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2;
                if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2;
            }
        }
    }
    return perimeter;
}

// complexity: O(n*m) where n is the number of rows and m is the number of columns


