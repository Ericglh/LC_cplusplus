//
// Created by Lianghao Gao on 4/17/18.
//

//
// Created by Lianghao Gao on 4/17/18.
//
#include <iostream>
struct DoubleListNode {
    int val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
};

class MyLinkedList {
private:
    DoubleListNode *head;

public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = new DoubleListNode(0);
        head->next = nullptr;
        head->prev = nullptr;
    }

    /** Get the value of the index'th node in the linked list. If the node does not exist, return -1. */
    int get(int index) {
        DoubleListNode *tmp = head->next;
        if (index < 0) {
            return -1;
        } else {
            while (index > 0) {
                index--;
                if (tmp != nullptr) {
                    tmp = tmp->next;
                } else {
                    return -1;
                }

            }
        }
        return tmp == nullptr ? -1 : tmp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        DoubleListNode *newHead = new DoubleListNode(val);
        newHead->next = head->next;
        if (head->next) {
            head->next->prev = newHead;
        }
        newHead->prev = head;
        head->next = newHead;
        return;
    }


    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        DoubleListNode *newTail = new DoubleListNode(val);
        DoubleListNode *tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newTail;
        newTail->prev = tmp;
        return;
    }

    /** Add a node of value val before the index'th node in the linked list, if the length of the linked list is larger than index. */
    void addAtIndex(int index, int val) {
        int curIndex = 0;
        DoubleListNode *insert = new DoubleListNode(val);
        DoubleListNode *iterate = head;
        while (curIndex < index && iterate != nullptr) {
            iterate = iterate->next;
            curIndex++;
        }
        if (iterate == nullptr) {
            return;
        }
        insert->next = iterate->next;
        if (iterate->next) {
            iterate->next->prev = insert;
        }
        iterate->next = insert;
        insert->prev = iterate;
        return;
    }

    /** Delete the index'th node in the linked list, if it exists. */
    void deleteAtIndex(int index) {
        int curIndex = 0;
        DoubleListNode *iterate = head;
        while (curIndex < index && iterate != nullptr) {
            iterate = iterate->next;
            curIndex++;
        }
        if (iterate != nullptr && iterate->next != nullptr) {
            iterate->next->prev = iterate;
            iterate->next = iterate->next->next;
        }
    }
};