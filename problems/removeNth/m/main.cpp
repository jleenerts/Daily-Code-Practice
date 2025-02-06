#include <iostream>
#include "removeNth.h"

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    removeNth r;
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);

    std::cout << "Input: [1,2,3,4], n = 2\nOutput: ";
    head1 = r.removeNthFromEnd(head1, 2);
    printList(head1);

    ListNode* head2 = new ListNode(5);

    std::cout << "Input: [5], n = 1\nOutput: ";
    head2 = r.removeNthFromEnd(head2, 1);
    printList(head2);  

    ListNode* head3 = new ListNode(1);
    head3->next = new ListNode(2);

    std::cout << "Input: [1,2], n = 2\nOutput: ";
    head3 = r.removeNthFromEnd(head3, 2);
    printList(head3);

    return 0;
}
