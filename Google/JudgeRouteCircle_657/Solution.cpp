//
// Created by Lianghao Gao on 4/15/18.
//
#include <string>
#include <iostream>
using namespace std;
bool judgeCircle(string moves) {
    int x = 0, y = 0;
    for (int i = 0; i < moves.size(); ++i) {
        switch(moves[i]) {
            case 'U' :
                y++;
                break;       // and exits the switch
            case 'D' :
                y--;
                break;
            case 'L' :
                x--;
                break;
            case 'R' :
                x++;
                break;
        }
    }
    if (x == 0 && y == 0) {
        return true;
    } else {
        return false;
    }
}