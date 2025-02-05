#include <iostream>
#include "removeNth.h"

ListNode* removeNth::removeNthFromEnd(ListNode* head, int n) {
    if (head == nullptr) return nullptr;

    int length = 0;
    ListNode* ptr = head;
    while (ptr) {
        length++;
        ptr = ptr->next;
    }

    if (n == length) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    ptr = head;
    for (int i = 1; i < length - n; i++) {
        ptr = ptr->next;
    }

    ListNode* temp = ptr->next;
    ptr->next = temp->next;
    delete temp;

    return head;
}
