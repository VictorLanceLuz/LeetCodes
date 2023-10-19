/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int majority = 0, count = 0;

        for (int num : nums) // For each num (element) in nums (array)
        {
            if (count == 0) {
                majority = num;
            }
            if (majority == num) {
                count++;
            }
            else {
                count--;
            }
        }
        return majority;
    }
};
// @lc code=end

