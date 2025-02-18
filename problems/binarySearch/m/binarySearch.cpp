#include "binarySearch.h"

int binarySearch::search(std::vector<int>& nums, int target)
{
    if (nums.size() < 1) return -1;

    int l = 0;
    int r = nums.size() - 1;

    int toCheck = l + (r - l)/2;
    while (l <= r)
    { 
        toCheck = l + (r - l)/2;
        if (nums[toCheck] == target) return toCheck;
        if (nums[toCheck] < target) l = toCheck + 1;
        if (nums[toCheck] > target) r = toCheck - 1;
    }

    return -1;    
}