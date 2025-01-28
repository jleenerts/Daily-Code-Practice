#include "stock.h"
#include <iostream>

int main(int argc, char *argv[])
{
    stock market;

    std::vector<int> prices1 = {10,1,5,6,7,1};

    std::cout << "6 : " << std::endl << market.maxProfit(prices1) << std::endl;

    std::vector<int> prices2 = {10,8,7,5,2};

    std::cout << "0 : " << std::endl << market.maxProfit(prices2) << std::endl;

    std::vector<int> prices3 = {5,9,4,6,7,1,2};

    std::cout << "4 : " << std::endl << market.maxProfit(prices3) << std::endl;

    return 0;
}