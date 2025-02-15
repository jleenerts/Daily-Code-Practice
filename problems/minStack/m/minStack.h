#ifndef MIN_STACK_H_
#define MIN_STACK_H_

#include <unordered_map>
#include <iostream>
#include <stack>

class minStack {
private:
    std::stack<int> stack;
    std::stack<int> stackMin;

public:
    minStack();
    void push(int val); 
    void pop();
    int top();
    int getMin() ;


};

#endif
