#include "groupGrams.h"
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> GroupAnagrams::groupAnagrams(const vector<string>& strs) {
     vector<vector<string>> result;
     unordered_map<string, vector<string>> anagramMap;
     for (string word : strs) {
          string sortedWord = word;
          sort(sortedWord.begin(), sortedWord.end());
          anagramMap[sortedWord].emplace_back(word);
     }

     for (auto& group: anagramMap) {
          result.emplace_back(group.second);
     }

     return result;
}
