//
// Created by Lianghao Gao on 4/12/18.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    int a[5];
    cout << sizeof(a);

    vector<int> res;
    res.push_back(1);
    if (rowIndex == 0) {
        return res;
    }

    res.push_back(1);
    if (rowIndex == 1) {
        return res;
    }

    for (int i = 2; i < rowIndex; ++i) {
        vector<int> tmp;
        tmp.push_back(1);
        for (int j = 1; j < i; ++j) {
            tmp.push_back(res[j] + res[j - 1]);
        }
        tmp.push_back(1);
        res = tmp;
        tmp.clear();

    }
    return res;
}

