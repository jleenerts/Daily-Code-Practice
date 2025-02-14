/*
     solving Palindrome
     Feb 14th, 2024
*/

#include "palindrome.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
     string str1 = "listen";
     string str2 = "tacocat";
     
     Palindrome tester;
     string result;

     cout << "Palindrome tester: " << endl;

     result = tester.isPalindrome(str1) ? " is a palindrome" : " is not a palindrome";
     cout << "str1: " << str1 << result << endl;

     result = tester.isPalindrome(str2) ? " is a palindrome" : " is not a palindrome";
     cout << "str2: " << str2 << result << endl;

     
     return 0;
}