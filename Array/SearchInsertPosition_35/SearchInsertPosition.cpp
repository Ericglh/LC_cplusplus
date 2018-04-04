//
// Created by Lianghao Gao on 4/4/18.
//

#include "SearchInsertPosition.h"
using namespace std;

/* When do binary search:
 *      1. Update answer with a feasible solution at each iteration:
 *          In this case, we can update mid both left and right.
 *      2. Don't update answer:
 *          At the side of <= or >=, we have left = mid and at the other side we have right = mid + 1
 *
 * */


int SearchInsertPosition::searchInsert(vector<int> &nums, int target) {
    if (nums.size() <= 0) {
        return 0;
    }

    int left = 0, right = nums.size() - 1;
    int mid;
    while (left < right) {
        mid = (left + right) / 2;

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return mid;
}