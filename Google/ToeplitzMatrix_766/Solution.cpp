//
// Created by Lianghao Gao on 4/17/18.
//
#include <iostream>
#include <vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size() - 1; ++i) {
        int tmp = 0;
        while (tmp < matrix[0].size() - 1) {
            if (matrix[i][tmp] == matrix[i + 1][tmp + 1]) {
                tmp++;
            } else {
                return false;
            }
        }
    }

    for (int i = 1; i < matrix[0].size() - 1; ++i) {
        int tmp = 0;
        while (tmp < matrix.size() - 1) {
            if (matrix[tmp][i] == matrix[tmp + 1][i + 1]) {
                tmp++;
            } else {
                return false;
            }
        }
    }

    return true;
}
