#include "containsDuplicates.h"

bool containsDuplicates::hasDuplicate(std::vector<int>& nums) {
    std::map<int,int> counts;

    for (int number : nums) 
        if (counts.count(number) > 0) return true;
        else counts.insert({number,1});

    return false;
}