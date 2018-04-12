//
// Created by Lianghao Gao on 4/12/18.
//
#include <iostream>
#include <vector>
using namespace std;

//brutal force
vector<int> twoSum(vector<int>& numbers, int target) {
    int index1, index2;
    vector<int> res;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size() ; ++j) {
            if (numbers[i] + numbers[j] == target) {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}
// O(n)
vector<int> twoSum1(vector<int>& numbers, int target) {
    int index1 = 0, index2 = numbers.size() - 1;
    vector<int> res;
    while (index1 < index2) {
        if(numbers[index1] + numbers[index2] == target) {
            res.push_back(index1 + 1);
            res.push_back(index2 + 1);
        } else if (numbers[index1] + numbers[index2] < target) {
            index1++;
        } else {
            index2--;
        }
    }
}
