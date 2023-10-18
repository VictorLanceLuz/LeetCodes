/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
#define NAIVE
class Solution {
public:
    #ifdef NAIVE 
    // I will just do the naive O(m+n) solution. Come b
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combinedArray;
        for (int i = 0; i < nums1.size(); i++) {
            combinedArray.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            combinedArray.push_back(nums2[i]);
        }

        // Sort the combined array
        sort(combinedArray.begin(), combinedArray.end());

        int n = combinedArray.size();
        if (n % 2 == 0) // Divisible by 2 = Even
            return ((double)combinedArray[n / 2 - 1] + (double)combinedArray[n / 2]) / 2.0;
        
        else // Odd
            return (double)combinedArray[n / 2];

        

    }
    #endif

};
// @lc code=end

