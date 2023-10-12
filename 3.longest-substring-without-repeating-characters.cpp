/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // Using a character set for substring.
        int longestSubstring = 0;
        unordered_map<char, int> charSet;

        // Sliding Window technique to go through string array.
        int left = 0;
        int right = 0;
        for (right = 0; right < s.length(); right++) {
            
            // While loop checks if the right element already exists (duplicate),
            // then we remove from the left side.
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left += 1;
            }

            // Add into set if new element.
            charSet.insert({s[right], right});
            longestSubstring = max(longestSubstring, right - left + 1);
        }

        return longestSubstring; 
    }
};
// @lc code=end

