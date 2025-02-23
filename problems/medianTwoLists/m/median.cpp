#include "median.h"

double median::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    if (nums1.size() > nums2.size()) 
        return findMedianSortedArrays(nums2, nums1); 

    int m = nums1.size(), n = nums2.size();
    int left = 0, right = m;
    int medianPos = (m + n + 1) / 2;

    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = medianPos - partition1;

        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];

        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0) {
                return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
            } else {
                return std::max(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = partition1 - 1;
        } else {
            left = partition1 + 1;
        }
    }

    return 0.0;
}
