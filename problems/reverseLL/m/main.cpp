#include <iostream>
#include "reverse.h"

void printLL(ListNode* head)
{   
    ListNode* cur = head;
    while (cur) {std::cout << cur->val << " "; cur = cur->next;}
}

int main() {  
    reverse r;

    ListNode* head1 = new ListNode(0);
    head1->next = new ListNode(1);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(3);
    ListNode* head2 = nullptr;
  
    std::cout << "Input: head = [0,1,2,3] | Output: ";
    printLL(r.reverseList(head1));
    std::cout << std::endl;
    std::cout << "Input: head = [] | Output: ";
    printLL(r.reverseList(head2));
    std::cout << std::endl;

    return 0;
}
