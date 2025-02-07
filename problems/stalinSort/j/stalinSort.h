#ifndef STALINSORT_H_
#define STALINSORT_H_

#include <vector>

using namespace std;

class StalinSort {
     public:
          // constructor must take in reference to vector of integers
          StalinSort(vector<int>& data);
          
          void sort() const;
          void print() const;
          
          void changeVector(vector<int>& newVec);

          // never forgetti the destructor
          ~StalinSort();
     private:
          vector<int> * vec;
};

#endif