//
// Created by Lianghao Gao on 4/17/18.
//

#include <iostream>
#include <string>
using namespace std;

int findLUSlength(string a, string b) {
    if (a == b) {
        return -1;
    }
    return max(a.size(), b.size());

}