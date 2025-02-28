#include "twoSum.h"
#include <iostream>

void print(std::vector<int> input)
{
    for (int value : input)
        std::cout << value << " ";
    std::cout << std::endl;
}
int main() {  
    twoSum checker;
    std::vector<int> input1 = {3,4,5,6};
    std::vector<int> input2 = {4,5,6};
    std::vector<int> input3 = {5,5};

    std::cout << "Input: nums = [3,4,5,6], target = 7 | Output: ";
    print(checker.getTwoSum(input1, 7));

    std::cout << "Input: nums = [4,5,6], target = 10 | Output: ";
    print(checker.getTwoSum(input2, 10));

    std::cout << "Input: nums = [5,5], target = 10 | Output: ";
    print(checker.getTwoSum(input3, 10));

    return 0;
}
