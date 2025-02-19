/*
     Solving group anagrams problem, where a list of strings is sorted
     into groups of anagrams.

     Feb 18th, 2024
     Jacob Leenerts
*/

#include "groupGrams.h"
#include <iostream>
using namespace std;

int main() {
     vector<string> data1 = {"act", "pots", "tops", "cat", "stop", "hat"};
     vector<string> data2 = {"x"};
     vector<string> data3 = {""};



     GroupAnagrams sorter;
     vector<vector<string>> result = sorter.groupAnagrams(data1);

     for (vector<string> group : result) {
          for (string word : group) {
               cout << word << " ";
          }
          cout << endl;
     }

     return 0;
}