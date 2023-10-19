/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        


        // Case where two elements, it is allowed to have dupes.
        if (n <= 2) {
            return n;
        }

        int k = 2;
        // Case where n >= 3 We look at last two elements.
        for (int i = 2;  i < n; i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }


        return k;
    }
};
// @lc code=end

