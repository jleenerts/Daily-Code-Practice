#include "palindrome.h"

bool Palindrome::isPalindrome(const std::string &str) const
{
     if (str.length() == 0) return false;

     // filter to lowercase and remove non-alphabetic characters
     std::string cpy;
     for (char c : str) {
          if (isalpha(c)) cpy += tolower(c);
     }

     // now reverse
     std::string rev;
     for (int i = cpy.length() - 1; i >= 0; i--) {
          rev += cpy[i];
     }

     return cpy == rev;
};