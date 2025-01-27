#include "validParentheses.h"
#include <iostream>

int main(int argc, char *argv[])
{
    validParentheses checker;

    std::string s1 = "(){}}{";

    std::cout << s1 << ": " << std::endl << checker.isValid(s1) << std::endl;

    std::string s2 = "([{}])";

    std::cout << s2 << " " << std::endl << checker.isValid(s2) << std::endl;

    std::string s3 = "[(])";

    std::cout << s3 << " " << std::endl << checker.isValid(s3) << std::endl;

    return 0;
}