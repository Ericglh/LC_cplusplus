//
// Created by Lianghao Gao on 4/16/18.
//
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canPermutePalindrome(string s) {
    unordered_map umap;
    int even = 0;
    for (char c : s) {
        umap[c]++;
    }

    for (auto i = umap.begin(); i != umap.end(); ++i) {
        if (i->second % 2 != 0) {
            even++;
        }
    }
    return even == 1 || even == 0;
    
}