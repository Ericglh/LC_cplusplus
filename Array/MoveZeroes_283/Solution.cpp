//
// Created by Lianghao Gao on 4/13/18.
//
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0, right = left + 1;
    while (right < nums.size()) {
        if (nums[left] == 0) {
            swap(nums[left], nums[right++]);
        } else {
            left++;
        }
    }
}