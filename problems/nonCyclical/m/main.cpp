#include <iostream>
#include "cyclical.h" 

int main() {
    cyclical tester;

    
    std::cout << "Test Case 1: " << tester.isNonCyclical(100) << std::endl;  
    
    std::cout << "Test Case 2: " << tester.isNonCyclical(101) << std::endl; 

    return 0;
}
