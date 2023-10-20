/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1; // To make sure we start at 4.

        while (start < end)
        {
            // Swap 
            cout << "start: " << start << endl;
            cout << "end:" << end << endl;
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            
            start++;
            end--;
        }
        
    }
};
// @lc code=end

