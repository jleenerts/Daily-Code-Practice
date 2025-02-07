/*
     Implementation of the Stalin Sort algorithm, which is a meme sorting algorithm that removes all elements that are not in order.
     This version is following least to greatest order and modifies the original data, it does not copy and sort the vector.

     Feb 6th, 2024
     Jacob Leenerts
*/

#include "stalinSort.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<int> vec1 = {1,6,3,5,6,5,5,6,7,4,9};
    vector<int> vec2 = {9,4,7,6,5,5,6,5,3,6,1};
    
    cout << "running Stalin Sort (least to greatest)" << endl;
    StalinSort stalin(vec1);

    cout << "vec1 before sort: ";
    stalin.print();
    stalin.sort();

    cout << "vec1 after sort: ";
    stalin.print();

    

    stalin.changeVector(vec2);
    cout << "vec2 before sort: ";
    stalin.print();
    stalin.sort();

    cout << "vec2 after sort: ";
    stalin.print();

    return 0;
}