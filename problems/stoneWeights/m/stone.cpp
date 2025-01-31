#include "stone.h"

int stone::lastStoneWeight(std::vector<int>& stones)
{
    std::priority_queue<int> stonesHeap(stones.begin(), stones.end());

    while (stonesHeap.size() > 1)
    {
        int s1, s2;
        s1 = stonesHeap.top(); stonesHeap.pop();
        s2 = stonesHeap.top(); stonesHeap.pop();

        int newStone = s1 - s2;

        if (newStone != 0) stonesHeap.push(newStone);
    }

    return stonesHeap.size() == 1 ? stonesHeap.top() : 0;
}