#include "lcs.h"

int lcs::longestConsecutive(std::vector<int>& nums)
{
    if (nums.size() < 1) return 0;

    std::unordered_set<int> contains;
    int lcs = 0;

    for (int num : nums) contains.insert(num);

    int cl = 0;
    for (int num : nums)
    {
        cl = 1;
        contains.erase(num);

        if (contains.count(num-1) > 0)
        {
            cl++;
            contains.erase(num-1);
            int cnum = num-2;
            while (contains.count(cnum) > 0)
            {
                cl++;
                contains.erase(cnum);
                cnum--;
            }
        }
        if (contains.count(num+1) > 0)
        {
            cl++;
            contains.erase(num+1);
            int cnum = num+2;
            while (contains.count(cnum) > 0)
            {
                cl++;
                contains.erase(cnum);
                cnum++;
            }
        }

        if (cl > lcs) lcs = cl;
    }

    return lcs;
}