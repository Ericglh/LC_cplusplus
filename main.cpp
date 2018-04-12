#include <iostream>
#include <vector>
#include "Array/SearchInsertPosition_35/SearchInsertPosition.h"
#include "Array/PlusOne_66/PlusOne.h"
#include "Array/RotateArray_189/RotateArray.h"

using namespace std;


int main() {

    /*Array.SearchInsertPosition
    vector<int> input;
    input.push_back(1);
    input.push_back(3);
    input.push_back(5);
    input.push_back(6);
    SearchInsertPosition searchInsertPosition;
    cout << searchInsertPosition.searchInsert(input, 10) << endl;
     */

    /*
     * Array.PlusOne
     */
//    int array[] = {9, 9, 9, 9};
//    vector<int> input (array, array + 4);
//    PlusOne plusOne;
//    vector<int> res = plusOne.plusOne(input);
//    for (int i = 0; i < res.size(); ++i) {
//        cout << res[i] << endl;
//    }

    /*
     *  Array.RotateArray
     */


    int array[] = {1,2,3,4,5,6};
    vector<int> input (array, array + 6);
    RotateArray rotateArray;
    rotateArray.rotate(input, 2);

    return 0;
}