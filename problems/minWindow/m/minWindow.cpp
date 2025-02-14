#include "minWindow.h"

std::string minWindow::findMinWindow(std::string s, std::string t) {
    if (t.empty() || s.empty()) return "";

    std::unordered_map<char, int> freq;
    for (char c : t) freq[c]++;  // Count occurrences of characters in `t`.

    int left = 0, right = 0, lettersFound = 0;
    int minLength = INT_MAX, minStart = 0;
    std::unordered_map<char, int> window;

    while (right < s.size()) 
    {
        char c = s[right];
        if (freq.count(c) > 0) 
        {
            window[c]++;
            if (window[c] == freq[c]) lettersFound++;
        }

        // Try to shrink the window when all chars are found
        while (lettersFound == freq.size()) 
        {
            if (right - left + 1 < minLength) 
            {
                minLength = right - left + 1;
                minStart = left;
            }

            char leftChar = s[left];
            if (freq.count(leftChar) > 0) 
            {
                if (window[leftChar] == freq[leftChar]) lettersFound--;
                window[leftChar]--;
            }
            left++;
        }
        right++;
    }

    return minLength == INT_MAX ? "" : s.substr(minStart, minLength);
}