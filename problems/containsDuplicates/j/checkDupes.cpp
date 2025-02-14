#include "checkDupes.h"
#include <unordered_map>

// constructor
CheckDupes::CheckDupes(vector<int>& data) : data(&data) {}

// change the vector
void CheckDupes::changeVector(vector<int>& newVec) {
    data = &newVec;
}

// solving using C++ unordered map as a hash table
bool CheckDupes::check() const {
    if (!data->empty() && data->size() > 1) {
          // create the map
          unordered_map<int, bool> map;

          // loop through vector values
          auto iter = data->begin();
          auto iterEnd = data->end();
          while (iter != iterEnd) {
               
               // if the value is already in the map, return true
               if (map.find(*iter) != map.end()) {
                    return true;
               }
               // otherwise, add the value to the map
               else {
                    map.insert({*iter, true});
               }
               iter++;
          }
    }
    return false;
}

CheckDupes::~CheckDupes() {}