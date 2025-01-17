#include "stalinSort.h"

stalinSort::stalinSort(std::vector<int> &toSort, bool stl)
{
    int last = toSort[0];

    for (int index = 1; index < toSort.size(); index++)
    {
        if (toSort[index] < last && stl)
        {
            std::cout << "delete " << (toSort[index] < last) << std::endl;
            toSort.erase(toSort.begin()+index);
            index--;
            continue;
        }

        if (toSort[index] > last && !stl)
        {
            std::cout << "delete " << !stl << std::endl;
            toSort.erase(toSort.begin()+index);
            index--;
            continue;
        }

        last =  toSort[index];
    }
}