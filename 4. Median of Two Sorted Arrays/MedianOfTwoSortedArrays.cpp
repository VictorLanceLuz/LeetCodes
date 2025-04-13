#include <iostream>
#include <vector>

using namespace std;

// This solution was done using two-pointer method.
class Solution {
public:
    // Function to merge the two arrays.
    void mergeArrays(vector<int>& arr1, vector<int>& arr2, vector<int>& mergedArr) {
        int i = 0, j = 0;
        // Traverse both arrays.
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                mergedArr.push_back(arr1[i]);
                i++;
            }

            else {
                mergedArr.push_back(arr2[j]);
                j++;
            }
        }

        // If other array is done, store the rest of remaining array.
        while (i < arr1.size()) {
            mergedArr.push_back(arr1[i]);
            i++;
        }

        // Vice versa as above
        while (j < arr2.size()) {
            mergedArr.push_back(arr2[j]);
            j++;
        }
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        // Let's preallocate memory for the merged arrays.
        vector<int> nums12;

        mergeArrays(nums1, nums2, nums12);  


        double median = 0.0;
        int n = nums12.size();
        if (n % 2 == 0 ){ // Deven
            double left = nums12[n/2];
            double right = nums12[n/2-1];
            median = (left + right) / 2;
        }
        else {
            median = nums12[n/2];
        }

        return median;
    }
};

int main() {
    vector<int> nums1, nums2;
    nums1.insert(nums1.end(), 1);
    nums1.insert(nums1.end(), 3);
    
    
    nums2.insert(nums2.end(), 2);
    nums2.insert(nums2.end(), 4);
    cout << "TEST PARAMETERS (nums1): [";
    string delim = "";
    for (int i = 0 ; i < nums1.size(); i++ ) {
        cout << delim << nums1[i];
        delim = ",";
    }
    cout << "] \n";

    cout << "TEST PARAMETERS (nums2): [";
    delim = "";
    for (int i = 0 ; i < nums2.size(); i++ ) {
        cout << delim << nums2[i];
        delim = ",";
    }
    cout << "] \n";

    Solution S;
    
    cout << "The median is: "<< S.findMedianSortedArrays(nums1, nums2) << endl;
    
    system("pause");
    return 0;
}