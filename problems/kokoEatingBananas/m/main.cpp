#include <iostream>
#include <vector>
#include "koko.h"

int main(int argc, char *argv[])
{
    std::vector<int> piles1 = {1,4,3,2};
    int h1 = 9;

    std::vector<int> piles2 = {25,10,23,4};
    int h2 = 4;

    std::vector<int> piles3 = {12};
    int h3 = 3;

    koko ko;

    std::cout << "findRate" << std::endl;

    int rate1 = ko.findRate(piles1, h1); std::cout << rate1 << std::endl;
    int rate2 = ko.findRate(piles2, h2); std::cout << rate2 << std::endl;
    int rate3 = ko.findRate(piles3, h3); std::cout << rate3 << std::endl;

    return 0;
}