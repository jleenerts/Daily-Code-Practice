#include <iostream>
#include <vector>
#include "search2D.h"

int main(int argc, char *argv[])
{
    search2D searcher;

    std::vector<std::vector<int>> matrix = {{1,2,4,8},{10,11,12,13},{14,20,30,40}};
    int target = 10;

    std::cout << searcher.search(matrix, target) << std::endl;

    target = 15;

    std::cout << searcher.search(matrix, target) << std::endl;

    return 0;
}
