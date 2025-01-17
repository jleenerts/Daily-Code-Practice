#include "stalinSort.h"
#include <iostream>

int main(int argc, char *argv[])
{
    std::vector<int> toSort1 = {1,6,3,5,6,5,5,6,7,4,9};
    std::vector<int> toSort2 = {9,4,7,6,5,5,6,5,3,6,1};

    stalinSort sorter1(toSort1, true);
    stalinSort sorter2(toSort2, false);

    std::cout << "first" << std::endl;

    for (int number : toSort1)
        std::cout << number << " ";
    std::cout << std::endl;

    std::cout << "second" << std::endl;

    for (int number : toSort2)
        std::cout << number << " ";
    std::cout << std::endl;

    return 0;
}