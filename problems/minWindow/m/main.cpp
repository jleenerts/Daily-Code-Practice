#include <iostream>
#include "minWindow.h"

int main() {
    minWindow checker;
    std::string s1 = "OUZODYXAZV", t1 = "XYZ";
    std::string s2 = "xyz", t2 = "xyz";
    std::string s3 = "x", t3 = "xy";

    std::cout << "Example 1: " << checker.findMinWindow(s1, t1) << std::endl; // "YXAZ"
    std::cout << "Example 2: " << checker.findMinWindow(s2, t2) << std::endl; // "xyz"
    std::cout << "Example 2: " << checker.findMinWindow(s3, t3) << std::endl; // ""

    return 0;
}