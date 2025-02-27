#include "duplicate.h"

int duplicate::findDuplicate(std::vector<int>& nums) {
    for (int index = 0; index < nums.size(); index++)
    {
        if (nums[abs(nums[index])] < 0) return abs(nums[index]);
        else nums[abs(nums[index])] *= -1;
    }
    return -1;
}
