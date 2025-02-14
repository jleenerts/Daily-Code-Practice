/*
     Solving anagram in C++
     
*/

#include "anagram.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "listen";
    string str2 = "silent";
    
    cout << "running Anagram" << endl;
    Anagram anagram;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "is anagram: " << anagram.isAnagram(str1, str2) << endl;

    return 0;
}