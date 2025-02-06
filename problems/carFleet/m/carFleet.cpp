#include "carFleet.h"

int carFleet::getCarFleets(int target, std::vector<int>& position, std::vector<int>& speed)
{
    if (position.size() < 1) return 0;

    std::vector<std::pair<int,int>> posSpd;

    for (int ind = 0; ind < position.size(); ind++)        //combine vectors
            posSpd.push_back({position[ind],speed[ind]});

    std::sort(posSpd.begin(), posSpd.end(), [](const auto& a, const auto& b) {
        return a.first > b.first; // Reverse order
    });    //sort combined vectors

    std::vector<double> steps;
    for(auto [pos,spd] : posSpd)    //get steps from combined vector
        steps.push_back((target-pos)/(double)spd);

    int fleets = 0;
    double high = -1;
    for (double step : steps)  
    {
        if (high < step)
        {
            fleets++;
            high = step;
        }
    }

    return fleets;
}