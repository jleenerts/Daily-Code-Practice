#ifndef ADD_LL_H_
#define ADD_LL_H_

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    
class addLL {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif
