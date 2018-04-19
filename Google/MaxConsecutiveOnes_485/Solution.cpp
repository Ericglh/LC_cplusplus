//
// Created by Lianghao Gao on 4/19/18.
//
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int res = 0, max1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            res++;
        } else {
            max1 = max(max1, res);
            res = 0;
        }
    }
    return max1 = max(max1, res);
}