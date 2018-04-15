//
// Created by Lianghao Gao on 4/15/18.
//

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/** Initialize your data structure here. */
unordered_map<string, int > map1;

/** Returns true if the message should be printed in the given timestamp, otherwise returns false.
    If this method returns false, the message will not be printed.
    The timestamp is in seconds granularity. */
bool shouldPrintMessage(int timestamp, string message) {
    if (map1.count(message) > 0) {
        if (map1.find(message)->second + 10 < timestamp) {
            map1.insert(std::pair<string,int>(message,timestamp));
            return true;
        } else {
            return false;
        }
    } else {
        map1.insert(std::pair<string,int>(message,timestamp));
        return true;
    }
}