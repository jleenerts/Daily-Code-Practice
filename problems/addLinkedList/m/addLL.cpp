#include "addLL.h"

ListNode* addLL::addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    ListNode *next1 = l1;
    ListNode *next2 = l2;

    int top = 0, bottom = 0;
    int sum = 0, digit = 0;
    bool carry = 0;

    ListNode *head = nullptr;
    ListNode *last = nullptr;

    while (next1 != nullptr || next2 != nullptr)
    {
        top = 0, bottom = 0;
        
        if (next1 != nullptr) top = next1->val;
        if (next2 != nullptr) bottom = next2->val;

        sum = top + bottom + carry;

        if (sum > 9) 
        {
            digit = sum - 10;
            carry = 1;
        }else
        {
            digit = sum;
            carry = 0;
        }

        ListNode *newNode = new ListNode(digit);
        if (last != nullptr) last->next = newNode; else head = newNode;
        last = newNode;

        if (next1 != nullptr) next1 = next1->next;
        if (next2 != nullptr) next2 = next2->next;
    }

    if (carry) last->next = new ListNode(carry);

    return head;
}