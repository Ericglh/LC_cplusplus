//
// Created by Lianghao Gao on 4/30/18.
//

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n < 1) {
        return false;
    }

    if(n == 1) {
        return true;
    }
    while (n > 1) {
        if (n % 2 == 1) {
            return false;
        }
        n /= 2;
    }
    return true;
}