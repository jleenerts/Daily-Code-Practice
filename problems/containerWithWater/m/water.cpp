#include "water.h"

int water::maxArea(std::vector<int>& heights)
{
    int left = 0;
    int right = heights.size()-1;

    int max = 0;
    while (left < right)
    {
        int cur = std::min(heights[left], heights[right]) * (right - left);
        if (cur > max) max = cur;
        if (heights[left] < heights[right])
            left++;
        else
            right--;
    }

    return max;
}