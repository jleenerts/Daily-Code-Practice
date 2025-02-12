#ifndef CHECKDUPES_H_
#define CHECKDUPES_H_

#include <vector>

using namespace std;

class CheckDupes {
     public:
          // constructor must take in reference to vector of integers
          CheckDupes(vector<int>& data);
          
          bool check() const;

          void changeVector(vector<int>& newVec);

          ~CheckDupes();
     private:
          vector<int> * data;
};


#endif