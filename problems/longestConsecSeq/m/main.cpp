#include <iostream>
#include "lcs.h"



int main() {
    lcs counter;
    std::vector<int> v1 = {2,20,4,10,3,4,5};
    std::vector<int> v2 = {0,3,2,5,4,6,1,1};

    std::cout << "Input: [2,20,4,10,3,4,5] \n Output: " << counter.longestConsecutive(v1) << std::endl;
    

    std::cout << "Input: [0,3,2,5,4,6,1,1] \n Output: " << counter.longestConsecutive(v2) << std::endl;

    return 0;
}
