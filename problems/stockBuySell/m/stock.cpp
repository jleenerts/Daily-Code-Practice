#include "stock.h"

int stock::maxProfit(std::vector<int> prices)
{
    if (prices.size() < 1) return 0;

    int currentLow = prices[0];
    int currentHigh = prices[0];
    int profit = currentHigh - currentLow;

    for (int price : prices)
    {
        if (price < currentLow)
        {
            currentLow = price;
            currentHigh = price;
        }
        if (price > currentHigh)
        {
            currentHigh = price;
        }
        if(profit < currentHigh - currentLow)
        {
            profit = currentHigh - currentLow;
        }
    }

    return profit;
}