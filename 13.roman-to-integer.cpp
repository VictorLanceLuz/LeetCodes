/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start

#include <iostream>
#include <string>
#include <unordered_map> 

class Solution {
public:
    int romanToInt(std::string s) {
        int sum = 0; 

        std::unordered_map <char, int> roman_dict = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (unsigned int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && roman_dict[s[i]] < roman_dict[s[i+1]] )
                sum -= roman_dict[s[i]];
            else    
                sum += roman_dict[s[i]];
        }
        return sum;
    }
};
// @lc code=end

