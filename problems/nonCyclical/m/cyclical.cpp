#include "cyclical.h"

std::vector<int> getDigits(int number)
{
    std::vector<int> digits;

    int currentNumber = number;

    while (currentNumber > 0)
    {
        digits.push_back(currentNumber % 10);
        currentNumber /= 10;
    }

    return digits;
}

bool cyclical::isNonCyclical(int number)
{
    bool answer = true;
    std::map<int,int> seen;

    int currentNumber = number;

    while (currentNumber != 1)
    {
        seen[currentNumber] = currentNumber;
        std::vector<int> currentDigits = getDigits(currentNumber);
        currentNumber = 0;

        for (int digit : currentDigits) currentNumber += (digit * digit);

        if (seen.count(currentNumber) > 0) return false;
    }

    return answer;
}