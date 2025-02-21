#ifndef CYCLE_H_
#define CYCLE_H_

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    
class cycle {
public:
    bool hasCycle(ListNode* head);
};

#endif
