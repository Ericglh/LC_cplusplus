//
// Created by Lianghao Gao on 4/25/18.
//

#include <iostream>
#include <vector>
using namespace std;

int numberOfBoomerangs(vector<pair<int, int>>& points) {
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int row = points.size(), res = 0;
        if (row <= 2) {
            return res;
        }
        vector<vector<long>> distance(row, vector<long>(row, 0));
        //vector<long> distance(row, 0)

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < row; j++) {
                distance[i][j] += (points[i].first - points[j].first) * (points[i].first - points[j].first);
                distance[i][j] += (points[i].second - points[j].second) * (points[i].second - points[j].second);
            }
        }
        unordered_map<long, int> umap;
        for(int i = 0; i < row; i++) {
            umap.clear();
            for(int j = 0; j < row; j++){
                umap[distance[i][j]]++;
            }

            for(auto& x : umap){
                res += x.second * (x.second - 1);
            }
        }
        return res;
    }
}
