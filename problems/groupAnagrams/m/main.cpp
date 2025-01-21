#include <iostream>
#include "groupAnagrams.h"

int main(int argc, char *argv[])
{
    std::vector<std::string> words = {"car", "rat", "tar", "fire", "rief", "mop", "pom", "dirt", "art"};

    groupAnagrams gp;

    std::vector<std::vector<std::string>> wordsGroups = gp.group(words);

    for(std::vector<std::string> words : wordsGroups)
    {
        std::cout << "Group: " << std::endl;
        for(std::string word : words)
        {
            std::cout << word << ", ";
        }
        std::cout << std::endl;
    }


    return 0;
}