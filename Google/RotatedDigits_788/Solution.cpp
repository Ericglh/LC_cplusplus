
//
// Created by Lianghao Gao on 4/20/18.
//

#include <iostream>
#include <unordered_set>
using namespace std;

int rotatedDigits(int N) {
    unordered_map<int, int> umap = {{0, 0},{1, 1},{2, 5},{5, 2},{6, 9},{9, 6},{8, 8}};
    unordered_map<int, int> umap1 = {{0, 0},{1, 0},{2, 1},{3, 1},{4, 1},{5, 2},{6, 3},{7, 3},{8, 3},{9, 4}};
    int tmp, res = 0, change, high;
    if (N < 10) {
        return umap1.find(N)->second;
    } else {
        for (int i = 10; i <= N; i++) {
            tmp = i;
            change = 0;
            high = 1;
            while (tmp > 0) {
                if (umap.find(tmp % 10) != umap.end()) {
                    change = (umap.find(tmp % 10))->second * high + change;
                    high *= 10;
                    tmp /= 10;
                } else {
                    break;
                }
            }
            if (tmp <= 0 && i != change) {
                res++;
            }
        }
    }
    return res + 4;
}


int rotatedDigits(int N) {
    int dp[N + 1] = {0};
    int count = 0;
    for(int i = 0; i <= N; i++){
        if(i < 10){
            if (i == 0 || i == 1 || i == 8){
                dp[i] = 1;
            } else if (i == 2 || i == 5 || i == 6 || i == 9) {
                dp[i] = 2;
                count++;
            } else {
                dp[i] = 0;
            }
        } else {
            int a = dp[i / 10];
            int b = dp[i % 10];
            if(a == 1 && b == 1){
                dp[i] = 1;
            } else if (a >=1 && b>=1) {
                dp[i] = 2;
                count++;
            } else {
                dp[i] = 0;
            }
        }
    }
    return count;
}