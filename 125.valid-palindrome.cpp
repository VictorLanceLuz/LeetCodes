/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size();
        while (start < end)
        {
            // If not alphanumeric
            if (!isalnum(s[start]))
            {
                start++; // Skip character.
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--; // Skip character
                continue;
            }

            // Convert upper to lowercase
            if (tolower(s[start]) != tolower(s[end])) 
            {
                return false;
            }
            
            else
            {
                // Move to next.
                start ++;
                end--;
            }
        }
        return true;
    }
};
// @lc code=end

