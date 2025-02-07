#include "stalinSort.h"
#include <iostream>

StalinSort::StalinSort(vector<int>& data) : vec(&data) {}

void StalinSort::sort() const {
    if (!vec->empty() && vec->size() > 1) {
        auto iter = vec->begin();
        auto iterNext = iter + 1;
        auto iterEnd = vec->end();

        // used when an element is removed from the vector
        //auto temp = iter;        

        // iterate through the vector until 2nd to last element is reached (last element has no next to compare to).
        while (iterNext != iterEnd) {
            if (*iterNext < *iter) {
                vec->erase(iterNext);
                iterEnd = vec->end();

            } 
            else {
                iter++;
                iterNext++;
            }
        }
    }
}

void StalinSort::print() const {
    for (int number : *vec) {
        cout << number << " ";
    }
    cout << endl;
}

void StalinSort::changeVector(vector<int>& newVec) {
    vec = &newVec;
}

StalinSort::~StalinSort() {}
