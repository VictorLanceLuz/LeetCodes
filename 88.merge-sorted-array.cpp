/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
// Time complexity: O(m + n) since go through both arrays only once.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Two pointer approach
        int i = m - 1; // Last element of nums1
        int j = n - 1; // Last element of nums2
        int k = m + n - 1; // Last element of mergedArray


        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]){ // Moves the larger to the back.
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
    }
};
// @lc code=end

