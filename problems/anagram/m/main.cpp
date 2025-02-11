#include <iostream>
#include "anagram.h"

int main() {
    anagram checker;
    std::string s1 = "racecar", t1 = "carrace";
    std::string s2 = "jar", t2 = "jam";

    std::cout << std::boolalpha; 
    std::cout << "Example 1: " << checker.isAnagram(s1, t1) << std::endl; // true
    std::cout << "Example 2: " << checker.isAnagram(s2, t2) << std::endl; // false

    return 0;
}