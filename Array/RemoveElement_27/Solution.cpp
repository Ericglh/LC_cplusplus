//
// Created by Lianghao Gao on 4/13/18.
//
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        if (nums[left] == val) {
            nums[left] = nums[right--];
        } else {
            left++;
        }
    }
    return right;
}