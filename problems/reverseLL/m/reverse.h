#ifndef REVERSE_H_
#define REVERSE_H_

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class reverse {
    public:
        ListNode* reverseList(ListNode* head);
};

#endif
