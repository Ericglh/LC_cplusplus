//
// Created by Lianghao Gao on 4/19/18.
//

#include <iostream>
#include <vector>
using namespace std;

double largestTriangleArea(vector<vector<int>>& points) {
    int res = 0;
    for (int i = 0; i < points.size(); ++i) {
        for (int j = i + 1; j < points.size(); ++j) {
            for (int k = j + 1; k < points.size(); ++k) {
                res = max(res, 0.5 * abs(i[0] * j[1] + j[0] * k[1] + k[0] * i[1]- j[0] * i[1] - k[0] * j[1] - i[0] * k[1]));
            }
        }
    }
}