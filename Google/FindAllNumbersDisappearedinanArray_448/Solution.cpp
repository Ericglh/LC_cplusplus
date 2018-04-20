//
// Created by Lianghao Gao on 4/20/18.
//

#include <vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == nums[nums[i] - 1]) {
            continue;
        } else {
            swap(nums[i], nums[nums[i] - 1]);
            i--;
        }
    }

    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] - 1 != j) {
            res.push_back(j + 1);
        }
    }
    return res;
}