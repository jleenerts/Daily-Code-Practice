#include "findMin.h"


int findMin::findMinimum(std::vector<int> toSearch) 
{
    int size = toSearch.size();

    if (size == 0)
        return 0;
    if (size == 1)
        return toSearch[0];
    if (size == 2)
        return toSearch[0] < toSearch[1] ? toSearch[0] : toSearch[1];

    int l = 0;
    int r = size - 1;
    int m = l + (r - l) / 2;
    
    while (l < r)
    {   
        m = l + (r - l) / 2;
        (toSearch[m] < toSearch[r]) ? r = m : l = m + 1;;
    }

    return toSearch[l];
}