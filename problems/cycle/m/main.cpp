#include "cycle.h"
#include <iostream>

int main() {
    cycle checker;

    ListNode *head1 = new ListNode(1); 
    ListNode *head2 = new ListNode(1); 
    head1->next = new ListNode(2);
    head2->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = head1->next;
    
    std::cout << "Input: head = [1,2,3,4], Output: " << checker.hasCycle(head1) << std::endl;
 
    std::cout << "Input: head = [1,2],     Output: " << checker.hasCycle(head2) << std::endl;

    return 0;
}