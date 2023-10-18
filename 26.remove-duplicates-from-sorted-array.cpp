/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {   // If previous is not same as current. Update
                nums[k] = nums[i];  // This part changes previous.
                k++;
            }
            
        }
        
        return k; 
    }
};
// @lc code=end

