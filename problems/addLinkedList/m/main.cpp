#include <iostream>
#include "addLL.h"

void printLL(ListNode* head)
{   
    ListNode* cur = head;
    while (cur) {std::cout << cur->val << " "; cur = cur->next;}

}
int main() {
    addLL ll;

    ListNode *head11 = new ListNode(1);
    ListNode *head12 = new ListNode(4);
    head11->next = new ListNode(2);
    head12->next = new ListNode(5);
    head11->next->next = new ListNode(3);
    head12->next->next = new ListNode(6);

    ListNode *head21 = new ListNode(9);
    ListNode *head22 = new ListNode(9);

    std::cout << "Input : {1,2,3} & {4,5,6}, Sum : "; 
    printLL(ll.addTwoNumbers(head11,head12)); 
    std::cout << std::endl;
    std::cout << "Input : {1,2,3} & {4,5,6}, Sum : "; 
    printLL(ll.addTwoNumbers(head21,head22));
    std::cout << std::endl;

    return 0;
}