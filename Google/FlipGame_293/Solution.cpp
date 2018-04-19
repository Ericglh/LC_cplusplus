//
// Created by Lianghao Gao on 4/17/18.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> generatePossibleNextMoves(string s) {

    vector<string> res;

    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == '+' && s[i + 1] == '+') {
            string tmp = s;
            tmp[i] = '-';
            tmp[i + 1] = '-';
            res.push_back(tmp);
        }
    }
    return res;
}