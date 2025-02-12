#include <iostream>
#include "permutation.h"

int main() {
    permutation checker;
    std::string s1 = "adc", t1 = "dcda";
    std::string t2 = "lecaabee";

    std::cout << std::boolalpha; 
    std::cout << "Example 1: " << checker.checkInclusion(s1, t1) << std::endl; // true
    std::cout << "Example 2: " << checker.checkInclusion(s1, t2) << std::endl; // false

    return 0;
}