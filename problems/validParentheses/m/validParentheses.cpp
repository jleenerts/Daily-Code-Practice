#include "validParentheses.h"

bool validParentheses::isValid(std::string s) 
{
    if (s.length() == 1) return false;

    std::stack<char> parans;
    parans.push(s[0]);

    for (int ind = 1; ind < s.length(); ind++)
    {
        if (s[ind] == ')')
        {
            if (parans.empty() || parans.top() != '(')
                return false;
            
            parans.pop();
            continue;
        }
        if (s[ind] == ']')
        {
            if (parans.empty() || parans.top() != '[')
                return false;
            
            parans.pop();     
            continue;       
        }

        if (s[ind] == '}')
        {
            if (parans.empty() || parans.top() != '{')
                return false;
            
            parans.pop();  
            continue;          
        }

        parans.push(s[ind]);
    }


    return parans.size() == 0 ? true : false;
}
