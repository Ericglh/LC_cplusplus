//
// Created by Lianghao Gao on 4/30/18.
//

#include <string>
#include <unordered_map>
using namespace std;
bool isStrobogrammatic(string num) {
    unordered_map<char, char> umap({{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}});
    if (num.size() == 1 && (num[num.size() / 2] != '0' && num[num.size() / 2] != '1' && num[num.size() / 2] != '8'))
        return false;

    for (int i = 0; i < num.size() / 2; ++i) {
        if (umap.find(num[i]) == umap.end() || umap[num[i]] != num[num.size() - i - 1]) {
            return false;
        }
    }
    cout << num[num.size() / 2] << endl;
    if (num.size() % 2 == 1 && (num[num.size() / 2] != '0' && num[num.size() / 2] != '1' && num[num.size() / 2] != '8')) {
        return false;
    }
    return true;
}