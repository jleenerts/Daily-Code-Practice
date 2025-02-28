#include "twoSum.h"

std::vector<int> twoSum::getTwoSum(std::vector<int>& nums, int target)
{
    std::unordered_map<int,int> exists;

    for (int index = 0; index < nums.size(); index++)
        if (exists.count(target-nums[index]) > 0) 
            return {exists[target-nums[index]], index};
        else exists[nums[index]] = index;

}