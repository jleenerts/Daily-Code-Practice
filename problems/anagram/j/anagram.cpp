#include "anagram.h"

bool Anagram::isAnagram(const std::string &s, const std::string &t) const
{
    // filter to lowercase and remove non-alphabetic characters
    std::string cpy1;
    for (char c : s) {
         if (isalpha(c)) cpy1 += tolower(c);
    }
    
    std::string cpy2;
    for (char c : t) {
         if (isalpha(c)) cpy2 += tolower(c);
    }

    // now we have two strings with only lowercase alphabetic characters to compare
    if (cpy1.length() != cpy2.length()) return false;

    // now we're going to remove characters from cpy2 that are in cpy1
    // if the character is not found in cpy2, then the strings are not anagrams
    for (char c : cpy1) {
        size_t found = cpy2.find_first_of(c);
        if (found != std::string::npos) {
            cpy2.erase(found, 1);
        }
        else {
            return false;
        }
    }
    
    // if any are left in cpy2, then the strings are not anagrams

    return cpy2.empty();
}