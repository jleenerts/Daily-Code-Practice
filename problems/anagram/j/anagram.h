#ifndef ANAGRAM_H_
#define ANAGRAM_H_

#include <iostream>

class Anagram {
    public:
        bool isAnagram(const std::string& s, const std::string& t) const;
};

#endif