#include <iostream>
#include "median.h"

int main() {  
    median m;

    std::vector<int> nums1 = {1,2};
    std::vector<int> nums2 = {3};
  
    std::cout << "Input: nums1 = [1,2], nums2 = [3] | Output: " << m.findMedianSortedArrays(nums1,nums2) << std::endl;
    nums1 = {1,3};
    nums2 = {2,4};
    std::cout << "Input: nums1 = [1,3], nums2 = [2,4] | Output: " << m.findMedianSortedArrays(nums1,nums2) << std::endl;

    return 0;
}
