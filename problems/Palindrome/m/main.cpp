#include "Palindrome.h"

int main() {
    Palindrome pal;
    std::string s1 = "Was it a car or a cat I saw?";
    std::string s2 = "tab a cat";
    
    std::cout << "Example 1: " << pal.isPalindrome(s1) << std::endl;
    std::cout << "Example 2: " << pal.isPalindrome(s2) << std::endl;
    
    return 0;
}