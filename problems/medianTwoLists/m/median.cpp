#include "median.h"

double median::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
{
    int size = nums1.size() + nums2.size();

    if (nums1.size() == 0) 
    {
        if (size % 2 == 0)
            return (nums2[(size-1)/2] + nums2[((size-1)/2)+1]) / 2.0;
        else return nums2[(size-1)/2];
    }
    
    if (nums2.size() == 0)
    {
        if (size % 2 == 0)
            return (nums1[(size-1)/2] + nums1[((size-1)/2)+1]) / 2.0;
        else return nums1[(size-1)/2];
    }

    if (size % 2 == 0) // even
    {
        int toFind = (size-1)/2;
        
        int i = 0;
        int i1 = 0;
        int i2 = 0;
        while(i1 < nums1.size() || i2 < nums2.size())
        {
            if (i == toFind)
            {
                if (nums1[i1] < nums2[i2])
                {
                    int calc = nums1[i1];
                    if (i1+1 < nums1.size()) 
                        i1++;
                    else 
                        return (calc + nums2[i2]) / 2.0;
                  
                    calc += (nums1[i1] < nums2[i2]) ? nums1[i1] : nums2[i2];
                    return calc/2.0;
                }
                return (nums1[i1] + nums2[i2]) / 2.0;
            }
                

            if (i1+1 < nums1.size() && nums1[i1] < nums2[i2]) i1++;
            else if (i2+1 < nums2.size() && nums1[i1] > nums2[i2]) i2++;

            if (i1+1 < nums1.size() && nums1[i1] == nums2[i2]) i1++;
            else if (nums1[i1] == nums2[i2]) i2++;

            i++;
        }
    }else             
    {
        int toFind = size/2;
        
        int i = 0, i1 = 0, i2 = 0;
        while(i1 < nums1.size() || i2 < nums2.size())
        {
            if (i == toFind)
                return nums1[i1] < nums2[i2] ? nums1[i1] : nums2[i2];

            if (i1 < nums1.size() && nums1[i1] < nums2[i2]) i1++;
            else if (i2 < nums2.size() && nums1[i1] > nums2[i2]) i2++;
            i++;     
        }

    }
}