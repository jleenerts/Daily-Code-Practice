#include <iostream>
#include "stone.h" 

int main() {
    stone smash;

    std::vector<int> stones1 = {2,3,6,2,4};
    std::vector<int> stones2 = {1,2};

    std::cout << "Test Case 1: " << smash.lastStoneWeight(stones1) << std::endl;  
    
    std::cout << "Test Case 2: " << smash.lastStoneWeight(stones2) << std::endl; 

    return 0;
}
