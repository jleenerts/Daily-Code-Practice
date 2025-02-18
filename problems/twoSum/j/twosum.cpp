#include "twosum.h"

std::vector<int> TwoSum::twoSum(const std::vector<int>& nums, int target) {
    std::vector<int> result;

    // the outer loop does not need to run to the last element
    // as there is no further elements to compare itself to
    std::size_t outerLoopSize = nums.size() - 1;

    for (std::size_t i = 0; i < outerLoopSize; i++) {
        for (std::size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    // we are allowed to assume the solution is within array but this is
    // a simple result to return if no solution is found
    result = {-1, -1};
    return result;
}