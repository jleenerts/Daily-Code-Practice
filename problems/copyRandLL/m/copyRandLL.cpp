#include "copyRandLL.h"

Node* copyRandLL::copyRandomList(Node* head) {
    if (head == nullptr) return nullptr;

    Node* current = head;

    std::unordered_map<Node*,Node*> copyHash;
    copyHash[nullptr] = nullptr;

    while (current)
    {
        Node* newNode = new Node(current->val);
        copyHash[current] = newNode;
        current = current->next;
    }

    current = head;

    while (current)
    {
        Node* newNode = copyHash[current];
        newNode->next = copyHash[current->next];
        newNode->random = copyHash[current->random];
        current = current->next;
    }

    return copyHash[head];
}
