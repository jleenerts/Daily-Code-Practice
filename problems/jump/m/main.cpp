#include "jump.h"
#include <iostream>

int main() {  
    jump checker;
    std::vector<int> input1 = {1,2,0,1,0};
    std::vector<int> input2 = {1,2,1,0,1};

    std::cout << "Input: nums = [1,2,0,1,0] | Output: " << checker.canJump(input1) << std::endl;
    std::cout << "Input: nums = [1,2,1,0,1] | Output: " << checker.canJump(input2) << std::endl;

    return 0;
}
