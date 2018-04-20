//
// Created by Lianghao Gao on 4/20/18.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkUpperCase(char t) {
    return t >= 'A' && t <= 'Z';
}

bool checkLowerCase(char t) {
    return t >= 'a' && t <= 'z';
}


bool detectCapitalUse(string word) {
    if (word.size() == 1) {
        return true;
    }
    if (word[0] >= 'A' && word[0] <= 'Z' && word[1] >= 'A' && word[1] <= 'Z' ) {

        for (int i = 1; i < word.size(); i++) {
            if (!checkUpperCase(word[i])) {
                return false;
            }
        }

    } else if(word[0] >= 'A' && word[0] <= 'Z' && word[1] >= 'a' && word[1] <= 'z' ) {

        for (int i = 1; i < word.size(); i++) {
            if (!checkLowerCase(word[i])) {
                return false;
            }
        }

    } else {

        for (int i = 1; i < word.size(); i++) {
            if (word[i] < 'a' || word[i] > 'z') {
                return false;
            }
        }

    }
    return true;
}