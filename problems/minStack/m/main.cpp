#include <iostream>
#include "minStack.h"

int main() {

    minStack minStack;
    minStack.push(1);
    minStack.push(2);
    minStack.push(0);
    minStack.getMin(); // return 0
    minStack.pop();
    minStack.top();    // return 2
    minStack.getMin(); // return 1

    return 0;
}