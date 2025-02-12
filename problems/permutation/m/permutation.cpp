#include "permutation.h"

bool permutation::checkInclusion(std::string s1, std::string s2)
{
    if (s1.length() > s2.length()) return false;

    std::vector<int> alphaS1(26, 0), window(26, 0);

    for (char c : s1) alphaS1[c - 'a']++;

    int left = 0, right = 0;
    int windowSize = s1.length();

    while (right < s2.length()) {
        window[s2[right] - 'a']++;

        if (right - left + 1 > windowSize) {
            window[s2[left] - 'a']--;
            left++;
        }

        if (window == alphaS1) return true;

        right++;
    }

    return false;
}