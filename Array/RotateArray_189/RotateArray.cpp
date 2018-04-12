//
// Created by Lianghao Gao on 4/4/18.
//

#include "RotateArray.h"
using namespace std;

void RotateArray::rotate(vector<int>& nums, int k){
    int count = 0;
    int step = k % nums.size();
    int index = 0;
    int swapTmp = nums[step];
    int swapTmp1 = 2;
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    cout << "-----------" << endl;
    while (count <= nums.size()) {
        swap(&nums[1], &nums[2]);
        index += step;
        if (index >= nums.size()) {
            index %= nums.size();

        }
        count++;
    }
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
}