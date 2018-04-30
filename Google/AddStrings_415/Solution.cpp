//
// Created by Lianghao Gao on 4/30/18.
//

#include <string>
using namespace std;

string addStrings(string num1, string num2) {
    int carry = 0, len1 = num1.size() - 1, len2 = num2.size() - 1, tmp = 0, idx = 0;
    //int minLen = num1.size() > num2.size() ? num2.size() : num1.size();
    vector<char> res;
    while (len1 >= 0 && len2 >= 0) {
        tmp = carry + (num1[len1] - '0') + (num2[len2] - '0');
        carry = tmp >= 10 ? tmp / 10 : 0;
        res.push_back((tmp % 10) + '0');
        len1--;
        len2--;
    }

    if (len1 < 0) {
        while (len2 >= 0) {
            tmp = carry + (num2[len2] - '0');
            carry = tmp >= 10 ? tmp / 10 : 0;
            res.push_back((tmp % 10) + '0');
            len2--;
        }
    } else {
        while (len1 >= 0) {
            tmp = carry + (num1[len1] - '0');
            carry = tmp >= 10 ? tmp / 10 : 0;
            res.push_back((tmp % 10) + '0');
            len1--;
        }

    }

    if (carry > 0) {
        res.push_back(carry + '0');
    }

    std::string ss;

    for (auto letter : res) {
        ss = letter + ss;
    }
    return ss;
}