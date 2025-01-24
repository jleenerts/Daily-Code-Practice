#include "search2D.h"

int search2D::search(std::vector<std::vector<int>>& matrix, int target)
{
    if (matrix.empty() || matrix[0].empty()) return false;

    int top = 0;
    int bottom = matrix.size() - 1;
    int row = 0;

    while (top <= bottom)
    {
        row = top + (bottom - top) / 2;

        if (matrix[row][0] <= target && target <= matrix[row].back())
        {
            break;
        }
        else if (matrix[row][0] > target)
        {
            bottom = row - 1; 
        }
        else
        {
            top = row + 1;
        }
    }

    if (top > bottom) return false;

    int left = 0;
    int right = matrix[row].size() - 1;
    

    while (left <= right)
    {
        int col = left + (right - left) / 2;

        if (matrix[row][col] == target)
        {
            return true; 
        }
        else if (matrix[row][col] > target)
        {
            right = col - 1; 
        }
        else
        {
            left = col + 1; 
        }
    }

    return false; 
}
