#include "minStack.h"

minStack::minStack() 
{
}

void minStack::push(int val) 
{
    std::cout << "Push: " << val << std::endl;
    stack.push(val);
    stackMin.push(std::min(val, stackMin.empty() ? val : stackMin.top()));
}

void minStack::pop() 
{   
    std::cout << "Pop: " << stack.top() << std::endl;
    stackMin.pop();
    stack.pop();
}

int minStack::top() 
{
    std::cout << "Top: " << stack.top() << std::endl;
    return stack.top();
}

int minStack::getMin() 
{
    std::cout << "Min: " << stackMin.top() << std::endl;
    return stackMin.top();
}