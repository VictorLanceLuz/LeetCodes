/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;

void modifiedBinarySearch(int left, int right, vector<int> &nums, int target, bool findFirstPos, vector<int> &ans) {
        
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                if (findFirstPos == true) 
                {
                    ans[0] = mid;       // update firstPos
                    right = mid - 1;    // Keep searching on left side.
                }
                else
                {
                    ans[1] = mid;       // update lastPos
                    left = mid + 1;     // Keep searching on right side. 
                }
            }

            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
    }

class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        // We will perform binary search to get O(log n) space-time complexity
        int firstPos = -1;
        int lastPos = -1;
        int right = nums.size() - 1;
        int left = 0;
        vector<int> ans = {firstPos, lastPos};

        
        // Use binary search to find first position (bool = true) or last position (bool = false)
        modifiedBinarySearch(left, right, nums, target, true, ans);
        modifiedBinarySearch(left, right, nums, target, false, ans);

        

        return ans;
    }
};
// @lc code=end

