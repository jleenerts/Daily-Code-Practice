/*
     Leetcode Question 217 Contains Duplicate

     Feb 12th, 2024
*/

#include "checkDupes.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
     vector<int> vec1 = {1, 2, 3, 1}; // true
     vector<int> vec2 = {1, 2, 3, 4}; // false
     vector<int> vec3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}; // true

     cout << "running Contains Duplicates" << endl;
     CheckDupes checker(vec1);

     cout << "vec1 contains duplicates: " << checker.check() << endl;

     checker.changeVector(vec2);
     cout << "vec2 contains duplicates: " << checker.check() << endl;

     checker.changeVector(vec3);
     cout << "vec3 contains duplicates: " << checker.check() << endl;

     return 0;
}