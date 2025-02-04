#ifndef REORDER_LINKED_LIST_H_
#define REORDER_LINKED_LIST_H_

#include <vector>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class reorderLinkedList {
    private:
    public:
        void reorderList(ListNode* head);

};

#endif
