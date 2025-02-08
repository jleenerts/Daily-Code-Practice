#include "Palindrome.h"

bool Palindrome::isPalindrome(std::string s)
{
    int l = 0;
    int r = s.length() - 1;

    while (l < r)
    {
        while (l < r && !isalnum(s[l])) l++;  
        while (l < r && !isalnum(s[r])) r--;  

        if (tolower(s[l]) != tolower(s[r])) return false;

        l++;
        r--;
    }

    return true;

}