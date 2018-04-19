//
// Created by Lianghao Gao on 4/19/18.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string similarRGB(string color) {
    string str = color.substr(1, color.size() - 1);
    string res = "";
    for (int i = 0; i < str.size(); i += 2) {
        char first = str[i];
        char second = str[i + 1];
        int fir, sec;
        if (first > '9' || first < '0') {
            fir = first - 'a' + 10;
        } else {
            fir = first - '0';
        }
        if (second > '9' || second < '0') {
            sec = second - 'a' + 10;
        } else {
            sec = second - '0';
        }
        int maxtmp = INT_MIN, tmp = fir * 16 + sec;
        for (int j = 0; j <= 15; ++j) {
            int result = -pow(tmp - (j * 16 + j), 2);
            if (maxtmp < result) {
                if (j > 9) {
                    first = j - 10 + 'a';
                    second = j - 10 + 'a';
                } else {
                    first = j + '0';
                    second = j + '0';
                }

                maxtmp = result;
            }
        }
        res.push_back(first);
        res.push_back(second);
    }
    return res.insert(0, "#");
}