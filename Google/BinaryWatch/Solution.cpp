//
// Created by Lianghao Gao on 4/28/18.
//

#include <iostream>
#include <vector>
using namespace std;

int hour[] = {1, 2, 4, 8}, minute[] = {1, 2, 4, 8, 16, 32};

void helper(vector<string> &res, pair<int, int> time, int numLed, int num) {
    if (num == 0) {
        res.push_back(to_string(time.first) +  (time.second < 10 ?  ":0" : ":") + to_string(time.second));
        return;
    }
    for (int i = numLed; i < hour.size() + minute.size(); ++i) {
        if (i < hour.size()) {
            time.first += hour[i];
            if (time.first < 12) {
                helper(res, time, i + 1, num - 1);
            }
            time.first -= hour[i];
        } else {
            time.second += minute[i - hour.size()];
            if (time.second < 60) {
                helper(res, time, i + 1, num - 1);
            }
            time.second -= minute[i - hour.size()];
        }
    }

}


vector<string> readBinaryWatch(int num) {
    vector<string> res;
    helper(res, make_pair(0, 0), 0, num);
    return res;
}