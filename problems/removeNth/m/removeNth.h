#ifndef REMOVE_NTH_H_
#define REMOVE_NTH_H_

#include <vector>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class removeNth {
    private:
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n);
};

#endif
