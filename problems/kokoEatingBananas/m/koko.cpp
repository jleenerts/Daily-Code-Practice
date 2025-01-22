#include "koko.h"

int testRate(std::vector<int> &piles, int rate)
{
    int time = 0;

    for (int amo : piles) 
    {
        time += (amo + rate - 1) / rate; 
    }

    return time;
}

int koko::findRate(std::vector<int> piles, int h)
{
    int max = piles[0];

    for (int amo : piles) max < amo ? max = amo : max = max;
    
    int rate = max/2;
    int bottom = 0;
    int top = max;

    int timeTook;

    while (top - bottom > 1)
    {
        timeTook = testRate(piles, rate);
        //std::cout << bottom << " " << rate << " " << top << std::endl;

        if (timeTook > h)
        {
            bottom = rate;
            rate = (bottom + top) / 2;
        }else
        {
            top = rate;
            rate = (bottom + top) / 2;
        }
    }

    return testRate(piles, rate+1) <= h ?  rate+1 :  rate;
}