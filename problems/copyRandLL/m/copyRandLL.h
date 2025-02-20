#ifndef COPY_RAND_LL_H_
#define COPY_RAND_LL_H_

#include <iostream>
#include <unordered_map>

class Node {
    public:
        int val;
        Node* next;
        Node* random;
        
        Node(int _val) {
            val = _val;
            next = NULL;
            random = NULL;
        }
};
    
class copyRandLL {
public:
    Node* copyRandomList(Node* head);
};

#endif
