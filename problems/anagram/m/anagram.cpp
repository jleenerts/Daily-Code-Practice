#include "anagram.h"

bool anagram::isAnagram(std::string s, std::string t)
{
    if (s.length() != t.length()) return false;

    std::unordered_map<char,int> sset, tset;

    for (char c : s) sset[c]++;
    for (char c : t) tset[c]++;

    for (char c : s) if (sset[c] != tset[c]) return false;

    return true;
}