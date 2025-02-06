#include "reorderLinkedList.h"

//  [0, n-1, 1, n-2, 2, n-3, ...]

ListNode* reverseLinkedList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode* back = nullptr;
    ListNode* cur = head;
    ListNode* next = nullptr;

    while (cur != nullptr) {
        next = cur->next;  
        cur->next = back;  
        back = cur;        
        cur = next;        
    }

    return back; 
}

void reorderLinkedList::reorderList(ListNode* head) 
{
    if (head == nullptr || head->next == nullptr || head->next->next == nullptr) return;

    ListNode *l1;
    ListNode *l2;

    ListNode *p1 = head;
    ListNode *p2 = head;

    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }

    l1 = head;
    l2 = p1->next;;
    p1->next = nullptr;

    l2 = reverseLinkedList(l2);

    p1 = l1;
    p2 = l2;
    ListNode *pn1 = nullptr;
    ListNode *pn2 = nullptr;

    while (p1 != nullptr && p2 !=nullptr)
    {
        pn1 = p1->next;
        pn2 = p2->next;

        p1->next = p2;
        if(pn1 != nullptr) p2->next = pn1;

        p1 = pn1;
        p2 = pn2;
    }
}
