//
// Created by Lianghao Gao on 4/20/18.
//
#include <string>
using namespace std;
char findTheDifference(string s, string t) {
    char res = s[0];
    for (int i = 1; i < s.size(); ++i) {
        res ^= s[i];
    }

    for (int j = 0; j < t.size(); ++j) {
        res ^= t[j];
    }
    return res;
}