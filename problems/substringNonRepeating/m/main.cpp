#include <iostream>
#include "substring.h"

int main() {
    substring checker;
    std::string s1 = "zxyzxyz";
    std::string s2 = "xxxx";
    
    std::cout << "Example 1: " << checker.lengthOfLongestSubstring(s1) << std::endl; // 3
    std::cout << "Example 2: " << checker.lengthOfLongestSubstring(s2) << std::endl; // 1

    return 0;
}