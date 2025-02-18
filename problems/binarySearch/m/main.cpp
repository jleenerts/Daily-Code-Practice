#include <iostream>
#include "binarySearch.h"

int main() {
    binarySearch bs;

    std::vector<int> v = {-1,0,2,4,6,8};
    int t1 = 4, t2 = 3;

    std::cout << "Input : {-1,0,2,4,6,8}, Target : 4, Found? : " << bs.search(v,t1) << std::endl;
    std::cout << "Input : {-1,0,2,4,6,8}, Target : 3, Found? : " << bs.search(v,t2) << std::endl;
    return 0;
}