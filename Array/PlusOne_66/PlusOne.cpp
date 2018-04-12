//
// Created by Lianghao Gao on 4/4/18.
//

#include "PlusOne.h"
using namespace std;

vector<int> PlusOne::plusOne(vector<int>& digits){
    int carry = 1;
    if (digits.size() == 0) {
        return *(new vector<int>(1, 1));
    } else {
        int i = 0;
        for (i = digits.size() - 1; i > 0; i--) {
            int tmp = (digits[i] + carry) % 10;
            carry = (digits[i] + carry) / 10;
            digits[i] = tmp;
        }

        int tmp = (digits[i] + carry) % 10;
        carry = (digits[i] + carry) / 10;
        digits[i] = tmp;
        if (carry != 0) {
            digits.insert(digits.begin(), 1);
        }
    }
    return digits;
}