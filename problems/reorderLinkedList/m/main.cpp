#include <iostream>
#include "reorderLinkedList.h"

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    reorderLinkedList rll;

    ListNode* head1 = new ListNode(2);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(6);
    head1->next->next->next = new ListNode(8);

    printList(head1);
    rll.reorderList(head1);
    printList(head1);  // Expected output: 2 8 4 6

    ListNode* head2 = new ListNode(2);
    head2->next = new ListNode(4);
    head2->next->next = new ListNode(6);
    head2->next->next->next = new ListNode(8);
    head2->next->next->next->next = new ListNode(10);

    printList(head2);
    rll.reorderList(head2);
    printList(head2);  // Expected output: 2 10 4 8 6

    return 0;
}
