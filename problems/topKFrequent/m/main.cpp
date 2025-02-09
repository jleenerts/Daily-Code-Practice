#include "topKFrequent.h"
#include <iostream>

void print(std::vector<int> topKFrequent)
{
    for (int freq : topKFrequent) std::cout << freq << " ";
    std::cout << std::endl;
}
int main(int argc, char *argv[])
{
    topKFrequent freq;

    std::vector<int> val1 = {1,2,2,3,3,3};
    std::vector<int> val2 = {7,7};

    std::cout << "1,2,2,3,3,3 | k = 2: " << std::endl;
    print(freq.topKFrequentElem(val1, 2));

    std::cout << "7,7 | k = 1: " << std::endl;
    print(freq.topKFrequentElem(val2, 2));

    return 0;
}