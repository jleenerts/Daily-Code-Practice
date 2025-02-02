#include <iostream>
#include "containsDuplicates.h"

int main() {
    containsDuplicates tester;
    std::vector<int> vec1 = {1, 2, 3, 3};
    std::vector<int> vec2 = {1, 2, 3, 4};

    std::cout << "Example 1: Input: nums = [1, 2, 3, 3]" << std::endl;
    std::cout << "Output: " << tester.hasDuplicate(vec1) << std::endl;

    std::cout << "Example 2: Input: nums = [1, 2, 3, 4]" << std::endl;
    std::cout << "Output: " << tester.hasDuplicate(vec2) << std::endl;

    return 0;
}
