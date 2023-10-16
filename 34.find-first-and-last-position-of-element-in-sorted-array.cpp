/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // We will perform binary search to get O(log n) space-time complexity
        vector<int> ans = {};
        ans.push_back(9);
        
        

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;

        }

        return ans;
    }
};
// @lc code=end

