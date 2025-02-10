#include <iostream>
#include "water.h"

int main() {
    water w;
    std::vector<int> test1 = {1, 7, 2, 5, 4, 7, 3, 6};
    std::vector<int> test2 = {2, 2, 2};

    std::cout << "Test 1 Output: " << w.maxArea(test1) << std::endl; // Expected Output: 36
    std::cout << "Test 2 Output: " << w.maxArea(test2) << std::endl; // Expected Output: 4

    return 0;
}
