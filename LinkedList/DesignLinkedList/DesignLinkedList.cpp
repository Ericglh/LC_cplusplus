//
// Created by Lianghao Gao on 4/17/18.
//
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class MyLinkedList {
private:
    ListNode *head;

public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = new ListNode(0);
        head->next = nullptr;
    }

    /** Get the value of the index'th node in the linked list. If the node does not exist, return -1. */
    int get(int index) {
        ListNode *tmp = head->next;
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
        ListNode *newHead = new ListNode(val);
        newHead->next = head->next;
        head->next = newHead;
        return;
    }


    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode *newTail = new ListNode(val);
        newTail->next = nullptr;
        newTail->val = val;
        ListNode *tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newTail;
        return;
    }

    /** Add a node of value val before the index'th node in the linked list, if the length of the linked list is larger than index. */
    void addAtIndex(int index, int val) {
        int curIndex = 0;
        ListNode *insert = new ListNode(val);
        insert->next = nullptr;
        ListNode *iterate = head;
        while (curIndex < index && iterate != nullptr) {
            iterate = iterate->next;
            curIndex++;
        }
        if (iterate == nullptr) {
            return;
        }
        insert->next = iterate->next;
        iterate->next = insert;
        return;
    }

    /** Delete the index'th node in the linked list, if it exists. */
    void deleteAtIndex(int index) {
        int curIndex = 0;
        ListNode *iterate = head;
        while (curIndex < index && iterate != nullptr) {
            iterate = iterate->next;
            curIndex++;
        }
        if (iterate == nullptr) {
            return;
        }
        iterate->next = iterate->next == nullptr ? nullptr : iterate->next->next;
    }
};