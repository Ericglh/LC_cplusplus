//
// Created by Lianghao Gao on 4/15/18.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
    unordered_multimap<int, int> map1;
    vector<int> res;
    for (int i = 0; i < B.size(); i++) {
        //map1.insert(B[i], i);
        map1.insert(std::pair<int,int>(B[i],i));
    }

    for (int j = 0; j < A.size(); ++j) {
        if (map1.count(A[j]) > 0) {
            auto it = map1.find(A[j]);
            res.push_back(it->second);
            map1.erase(it);
        } else {
            vector<int> tmp;
            return tmp;
        }
    }
    return res;
}