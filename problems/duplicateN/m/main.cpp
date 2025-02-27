#include <iostream>
#include "duplicate.h"

int main() {  
    duplicate checker;
    std::vector<int> input1 = {1,2,3,2,2};
    std::vector<int> input2 = {1,2,3,4,4};

    std::cout << "Input: nums = [1,2,3,2,2] | Output: ";
   
    std::cout << checker.findDuplicate(input1) << std::endl;
    std::cout << "Input: nums = [1,2,3,4,4] | Output: ";
   
    std::cout << checker.findDuplicate(input2) << std::endl;

    return 0;
}
