//
// Created by Lianghao Gao on 4/23/18.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<string> findRelativeRanks(vector<int>& nums) {
    vector<string> res(nums.size());
    if(nums.size() == 0) {
        return res;
    }
    map<int, int> treemap;
    for (int i = 0; i < nums.size(); ++i) {
        treemap[nums.size() - nums[i]] = i;
    }
    int i = 1;
    for (auto j = treemap.begin(); j != treemap.end(); j++) {
        cout << j->second << endl;
        if (i <= 3) {
            switch (i) {
                case 1:
                    res[j->second] = "Gold Medal";
                    break;
                case 2:
                    res[j->second] = "Silver Medal";
                    break;
                case 3:
                    res[j->second] = "Bronze Medal";
                    break;
            }
        } else {
            res[j->second] = to_string(i);
        }
        i++;
    }
    return res;
}