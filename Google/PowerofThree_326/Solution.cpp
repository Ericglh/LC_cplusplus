//
// Created by Lianghao Gao on 4/30/18.
//

using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0)
        return false;

    while (n > 1) {
        if (n % 3 != 0)
            return false;
        n /= 3;
    }
    return true;
}