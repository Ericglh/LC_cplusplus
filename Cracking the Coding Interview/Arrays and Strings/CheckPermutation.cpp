//
// Created by Lianghao Gao on 4/12/18.
//

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int checkPermutation(string str1, string str2){
    unordered_set<char> set;
    for (int i = 0; i < str1.size(); ++i) {
        set.insert(str1[i]);
    }

    for (int i = 0; i < str2.size(); ++i) {
        set.erase(str2[i]);
    }

    if (set.size() == 0) {
        return 1;
    } else {
        return 0;
    }

}

