/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <string>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);

        int lastNum = str.length(); 
        for (size_t i = 0; i < str.length(); i++)
        {
            if (str.length() == 1)
                return true;
            if (str[i] != str[(str.length()-i-1)])
                return false;
        }
        return true;
    }
};
// @lc code=end

