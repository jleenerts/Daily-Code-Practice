#include "copyRandLL.h"
#include <iostream>

void printLL(Node* head)
{   
    Node* cur = head;
    while (cur) 
    {
        std::cout << "[" << cur->val << ",";
        if (cur->random) std::cout << cur->random->val << "]"; else std::cout << "null]"; 
        cur = cur->next;
    }

}
int main() {
    copyRandLL ll;

    Node *head1 = new Node(3); //[[3,null],[7,3],[4,0],[5,1]]
    Node *head2 = new Node(1); //[[1,null],[2,2],[3,2]]
    head1->next = new Node(7);
    head2->next = new Node(2);
    head1->next->next = new Node(4);
    head2->next->next = new Node(3);  
    head1->next->next->next = new Node(5);  
    head1->random = nullptr;
    head2->random = nullptr;
    head1->next->random = head1;
    head2->next->random = head2->next->next;
    head1->next->next->random = head1;
    head2->next->next->random = head2->next->next;
    head1->next->next->next->random = head1->next;

    std::cout << "Input : [[3,null],[7,3],[4,0],[5,1]], Output : "; 
    printLL(ll.copyRandomList(head1)); 
    std::cout << std::endl;
    std::cout << "Input : [[1,null],[2,2],[3,2]], Output : "; 
    printLL(ll.copyRandomList(head2));
    std::cout << std::endl << "Note my output points to the val of the rand not the index, unlike the input";

    return 0;
}