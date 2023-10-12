/*
 * @lc app=leetcode id=1095 lang=cpp
 *
 * [1095] Find in Mountain Array
 */

// @lc code=start
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */


/* 
    1. Find index of the peak element, highest element. Use binary search.
    Idea is compare middle element with next element and determine whether peak is on left or right.
    Search continues towards the peak until single index which is peak.

    2. Once peak element is found, you have two subarrays: one is increase, and other is decreaseing.
        - In the increaseing subarray, perform binary search to find value.
        - If target is not found in increasing subarray, perform another on decreasing subarray.
    
    3. If target is not found in both subarrays, return -1.

*/
int findPeak(MountainArray & mountainArr, int n) 
{
    int start = 0, end = n -1;
    int res = -1; // Default for did not find.

    while (start < end)
    {
        int mid = start + (end-start)/2;
        if (mountainArr.get(mid) < mountainArr.get(mid + 1))
        {
            start = mid + 1;
            res = mid + 1;
        }
        else 
        {
            end = mid;
        }
    }

    std::cout << "Result from findPeak: " << res << endl;
    return res;
}


int binarySearch(int start, int end, MountainArray & mountainArr, int target, bool flag)
{
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if(target == mountainArr.get(mid))
        {
            res = mid; 
            if (flag) start = mid + 1;
            else end = mid - 1;
        }
        else if (target > mountainArr.get(mid))
        {
            if (flag) end = mid - 1;
            else start = mid + 1;
        }
        else
        {
            if (flag) start = mid + 1;
            else end = mid - 1;
        }
    }
    std::cout << "Result from BS: " << res << endl;
    return res;
}

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        if (n < 3) 
        {
            cout << "Returning since n < 3.";
            return -1;
        }

        int peak = findPeak(mountainArr, n);

        int left = binarySearch(0, peak, mountainArr, target, 0);
        // If element in left side array.
        if (left != -1) 
        {
            cout << "Submitting Left.";
            return left;
        }
        // If element not left side, look at right.
        int right = binarySearch(peak, n-1, mountainArr, target, 1);
        cout << "Submitting Right.";
        return right;

    }
};


    


// @lc code=end

