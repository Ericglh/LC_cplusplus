//
// Created by Lianghao Gao on 4/17/18.
//

#include <iostream>
#include <vector>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int paremeter = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 1) {
                paremeter += 4;
            }
            if (j > 0 && grid[i][j] == 1 && grid[i][j - 1] == 1) {
                //cout << i << " " << j << endl;
                paremeter -= 1;
            }
            if (i > 0 && grid[i][j] == 1 && grid[i - 1][j] == 1) {
                paremeter -= 1;
            }
            if (i < grid.size() - 1 && grid[i][j] == 1 && grid[i + 1][j] == 1) {
                paremeter -= 1;
            }
            if (j < grid[0].size() - 1 && grid[i][j] == 1 && grid[i][j + 1] == 1) {
                paremeter -= 1;
            }
        }
    }
    return paremeter;
}