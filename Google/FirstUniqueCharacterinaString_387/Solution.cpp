//
// Created by Lianghao Gao on 4/23/18.
//
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> umap;
    for(char c : s) {
        umap[c]++;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (umap[s[i]] > 0) {
            return i;
        }
    }
    return 0;
}