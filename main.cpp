#include <iostream>
#include <vector>
#include "Array/SearchInsertPosition_35/SearchInsertPosition.h"

using namespace std;


int main() {
    vector<int> input;
    input.push_back(1);
    input.push_back(3);
    input.push_back(5);
    input.push_back(6);
    SearchInsertPosition searchInsertPosition;
    cout << searchInsertPosition.searchInsert(input, 10) << endl;
    return 0;
}