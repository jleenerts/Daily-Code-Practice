/*
     Solving Two Sums
     https://neetcode.io/problems/two-integer-sum
*/

#include "twosum.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
     // expected result [0, 1]
     vector<int> vec1 = {3,4,5,6};
     int target1 = 7;

     // expected result [0, 2]
     vector<int> vec2 = {4,5,6};
     int target2 = 10;

     TwoSum solver;
     vector<int> result;

     cout << "running Two Sum" << endl;

     cout << "test 1:" << endl;
     result = solver.twoSum(vec1, target1);
     cout << "answer is [" << result[0] << ", " << result[1] << "]" << endl;

     cout << "test 2:" << endl;
     result = solver.twoSum(vec2, target2);
     cout << "answer is [" << result[0] << ", " << result[1] << "]" << endl;

     return 0;
}