#include <iostream>
#include "islands.h" 

int main() {
    islands islandCounter;

    std::vector<std::vector<int>> grid1 = {
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    std::cout << "Test Case 1: " << islandCounter.countIslands(grid1) << std::endl;  

    std::vector<std::vector<int>> grid2 = {
        {1, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1}
    };
    std::cout << "Test Case 2: " << islandCounter.countIslands(grid2) << std::endl; 

    return 0;
}
