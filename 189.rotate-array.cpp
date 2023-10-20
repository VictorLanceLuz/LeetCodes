/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        //Example: [1,2,3,4,5,6,7] k = 3;

        // After below: [7,6,5,4,3,2,1] start=0; end=6
        reverse(nums.begin(),nums.end());

        // After below: [5,6,7,4,3,2,1] start=0; end=3
        reverse(nums.begin(),nums.begin()+k);
        
        // After below: [5,6,7,1,2,3,4] start=3; end=6
        reverse(nums.begin()+k,nums.end());
    }
};
// @lc code=end

