#include "reverse.h"

ListNode* reverse::reverseList(ListNode* head) {
    if (!head) return nullptr; 

    ListNode* before = nullptr;
    ListNode* current = head;
    ListNode* next = current->next;

    while (current)
    {
        current->next = before;
        before = current;
        current = next;
        if (current) next = current->next;
    }

    return before;
}
