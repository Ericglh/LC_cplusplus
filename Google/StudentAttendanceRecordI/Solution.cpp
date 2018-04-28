//
// Created by Lianghao Gao on 4/28/18.
//

#include <string>
using namespace std;

bool checkRecord(string s) {
    int lNum = 0, aNum = 0;
    for (int i = 0; i < s.size(); ++i) {
        switch (s[i]) {
            case 'A':
                aNum++;
                lNum = 0;
                break;
            case 'L':
                lNum++;
                break;
            case 'P':
                lNum = 0;
                break;
        }

        if (aNum > 1 || lNum > 2){
            return false;
        }
    }
    return true;
}