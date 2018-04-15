//
// Created by Lianghao Gao on 4/14/18.
//
#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int left = 0;
    int res = 0;
    while (left < prices.size() - 1) {
        for (int i = left + 1; i < prices.size() && prices[i] > prices[left]; i++) {
            res = max(res, prices[i] - prices[left]);
        }
    }
    return res;
}