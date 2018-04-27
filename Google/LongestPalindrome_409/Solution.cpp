//
// Created by Lianghao Gao on 4/24/18.
//

#include <iostream>
#include <vector>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> umap;
    int res = 0, single = 0;
    for (char c : s) {
        umap[c]++;
    }

    if (umap.size() == 1) {
        return umap.begin()->second;
    }

    for (unordered_map<char, int>::iterator iter = umap.begin(); iter != umap.end(); iter++) {
        if (iter->second % 2 == 0) {
            res += iter->second;
        } else {
            if (single == 0) {
                res += iter->second;
                single = 1;
            } else {
                res += iter->second - 1;
            }
        }
    }
    return res;
}