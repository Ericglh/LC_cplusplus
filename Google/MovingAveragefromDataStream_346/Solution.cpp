//
// Created by Lianghao Gao on 4/16/18.
//

#include <iostream>
#include <vector>

using namespace std;

int curIndex;
int total;
double res;
vector<int> tmpArr;
double ave;
MovingAverage(int size) {
    tmpArr.clear();
    tmpArr.resize(size);
    curIndex = 0;
    total = 0;
    res = 0;
    ave = 0;
}

double next(int val) {
    if (total < tmpArr.size()) {
        tmpArr[total] = val;
        res += val;
        ave = res / (total + 1);
        total++;
    } else {
        curIndex = total % tmpArr.size();
        res = res + val - tmpArr[curIndex];
        ave = res / tmpArr.size();
        tmpArr[curIndex] = val;
        total++;
    }
    return ave;
}