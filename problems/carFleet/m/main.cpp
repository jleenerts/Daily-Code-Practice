#include <iostream>
#include "carFleet.h"

int main() {  
    carFleet counter;

    std::cout << "Example 1: target = 10, position = [1,4], speed = [3,2]" << std::endl;

    std::vector<int> p1 = {1,4};
    std::vector<int> s1 = {3,2};

    int a1 = counter.getCarFleets(10, p1, s1);

    std::cout << "Output: " << a1 << std::endl;

    std::cout << "Example 2: Input: target = 10, position = [4,1,0,7], speed = [2,2,1,1]" << std::endl;

    std::vector<int> p2 = {4,1,0,7};
    std::vector<int> s2 = {2,2,1,1};
    
    int a2 = counter.getCarFleets(10, p2, s2);
    std::cout << "Output: " << a2 << std::endl;

    return 0;
}

