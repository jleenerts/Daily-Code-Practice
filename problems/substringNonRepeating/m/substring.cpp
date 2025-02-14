#include "substring.h"

int substring::lengthOfLongestSubstring(std::string s){
    std::unordered_set<char> chars;
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < s.length()) {
        if (chars.count(s[right]) == 0) {
            chars.insert(s[right]);
            maxLen = std::max(maxLen, right - left + 1);
            right++;
        } else {
            chars.erase(s[left]);
            left++;
        }
    }

    return maxLen;
}
