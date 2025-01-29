#include "islands.h"

int islands::countIslands(std::vector<std::vector<int>> map)
{
    if (map.size() < 1) return 0;

    int count = 0;
    std::vector<std::vector<int>> seen(map.size(), std::vector<int>(map[0].size(), 0));
    std::queue<std::pair<int,int>> next;

    for (int row = 0; row < map.size(); row++)
    {
        for (int col = 0; col < map[0].size(); col++)
        {
            if (seen[row][col] == 1 || map[row][col] == 0) continue;

            if (map[row][col] == 1)
            {
                std::pair<int,int> s(row,col);
                next.push(s);
                seen[row][col] = 1;

                while (!next.empty())
                {
                    auto [crow, ccol] = next.front();
                    next.pop();
                    
                    if (crow+1 < map.size() && seen[crow+1][ccol] != 1 && map[crow+1][ccol] == 1)
                    {
                        std::pair<int,int> down(crow+1,ccol);
                        next.push(down);
                        seen[crow+1][ccol] = 1;
                    }
                    if (ccol+1 < map[0].size() && seen[crow][ccol+1] != 1 && map[crow][ccol+1] == 1)
                    {
                        std::pair<int,int> right(crow,ccol+1);
                        next.push(right);
                        seen[crow][ccol+1] = 1;
                    }                  
                    if (crow-1 >= 0 && seen[crow-1][ccol] != 1 && map[crow-1][ccol] == 1)
                    {
                        std::pair<int,int> up(crow-1,ccol);
                        next.push(up);
                        seen[crow-1][ccol] = 1;
                    }
                    if (ccol-1 >= 0 && seen[crow][ccol-1] != 1 && map[crow][ccol-1] == 1)
                    {
                        std::pair<int,int> left(crow,ccol-1);
                        next.push(left);
                        seen[crow][ccol-1] = 1;
                    }                    
                }
                count++;
            }
        }
    }
    

    return count;
}