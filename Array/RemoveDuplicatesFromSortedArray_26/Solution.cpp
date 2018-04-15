//
// Created by Lianghao Gao on 4/14/18.
//
#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int left = 1, right = left;
    if (nums.size() == 0) {
        return 0;
    }
    while (right < nums.size()) {
        if (nums[right] != nums[right - 1]) {
            nums[left++] = nums[right++];
        } else {
            right++;
        }
    }
    return left;
}