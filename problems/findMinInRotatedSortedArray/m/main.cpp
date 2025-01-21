#include <iostream>
#include <vector>
#include "findMin.h"

int main(int argc, char *argv[])
{
    // Define all rotated vectors
    std::vector<int> toSearch0 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> toSearch1 = {2, 3, 4, 5, 6, 7, 1};
    std::vector<int> toSearch2 = {3, 4, 5, 6, 7, 1, 2};
    std::vector<int> toSearch3 = {4, 5, 6, 7, 1, 2, 3};
    std::vector<int> toSearch4 = {5, 6, 7, 1, 2, 3, 4};
    std::vector<int> toSearch5 = {6, 7, 1, 2, 3, 4, 5};
    std::vector<int> toSearch6 = {7, 1, 2, 3, 4, 5, 6};

    findMin minFinder;
    int answer = 0;

    std::vector<std::vector<int>> allVectors = {
        toSearch0, toSearch1, toSearch2, toSearch3, toSearch4, toSearch5, toSearch6};

    for (size_t i = 0; i < allVectors.size(); i++) {
        std::cout << "toSearch" << i << std::endl;
        answer = minFinder.findMinimum(allVectors[i]);
        std::cout << "Minimum: " << answer << std::endl;
        
        std::cout << "Is correct? " << ((answer == 1) ? "yes" : "no") << std::endl;
    }

    return 0;
}
