/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int iterA = a.size() - 1;
        int iterB = b.size() - 1;
        int carry = 0;

        /*
        Adding 2 binary bits :
        0 + 0 = 0
        1 + 0 = 1
        0 + 1 = 1
        1 + 1 = 10
        */
        string result = "";
        while (iterA >= 0 || iterB >= 0 || carry == 1)
        {
            

            if (iterA >= 0)
            {
                carry += a[iterA] - '0'; // Subtract is to get int value of char from ASCII.
                iterA--;
            }

            if (iterB >= 0)
            {
                carry += b[iterB] - '0';
                iterB--;
            }

            // If carry = 2, result = 00.
            // If carry = 1, result = 10
            result += (carry % 2 + '0');
            carry = carry / 2;
        }

        reverse(result.begin(), result.end());
        return result;

    }
};
// @lc code=end

