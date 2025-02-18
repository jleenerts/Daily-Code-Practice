#include "twosum.h"
#include <unordered_map>
using namespace std;

vector<int> TwoSum::twoSum(const vector<int>& nums, int target) {
    vector<int> result;

    // we can use a hash map to store the values we have seen
    // first value is the difference and second value is the position of the number

    unordered_map<int, int> seen;
    for (size_t i = 0; i < nums.size(); i++) {
        // difference is subtracting the current number from the target
        int difference = target - nums[i];
        if (seen.find(difference) != seen.end()) {
            result = { seen[difference], static_cast<int>(i) };
            return result;
        }
        // else we add the current num to the map
        else {
            seen[nums[i]] = i;
        }
    }

    // we are allowed to assume the solution is within array but this is
    // a simple result to return if no solution is found
    result = { -1, -1 };
    return result;
}