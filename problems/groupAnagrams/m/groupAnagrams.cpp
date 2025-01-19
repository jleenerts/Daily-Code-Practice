#include "groupAnagrams.h"

std::vector<std::vector<std::string>> groupAnagrams::group(std::vector<std::string> toSort)
{
    std::vector<std::vector<std::string>> grouped;
    std::map<std::string,std::vector<std::string>> pairs; 

    std::string key = "00000000000000000000000000"; //26 0's for each letter in alphabet

    for(int index = 0; index < toSort.size(); index++)
    {
        std::string word = toSort[index];
        key = "00000000000000000000000000";

        for(char letter : word)
        {
            key[letter - 'a']++;
        }

        pairs[key].push_back(word);
    }

    for (const auto& [k, wl] : pairs) 
    {
        grouped.push_back(wl);
    }

    return grouped;
}