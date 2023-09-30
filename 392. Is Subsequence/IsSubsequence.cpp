#include <iostream>

using namespace std;

// BRUTE_FORCE or RECURSIVE or MEMOIZATION comment out the others.
#define BRUTE_FORCE
//#define RECURSIVE
//#define MEMOIZATION CANNOT

class Solution {
public:

    #ifdef BRUTE_FORCE
    bool isSubsequence(string s, string t) {
        int j = 0; // Index of s.

        for (int i = 0; i < t.length() && j < s.length(); i++) {
            if (s[j] == t[i]) {
                j++;
            }
        }
        if (j == s.length()) return true;
        else return false;
    }
    #endif

    #ifdef RECURSIVE
    bool isSubsequence(string s, string t) 
    {
        if (isSubs(s, t, s.length(), t.length()))
            return true;
        
        return false;
    }

    bool isSubs(string& s, string& t, int m, int n) 
    {
        if (m == 0)
            return true;
        if (n == 0)
            return false;

        // If last characters of two strings are matching
        if (s[m - 1] == t[n - 1])
            return isSubs(s, t, m - 1, n - 1);

        // If last characters are not matching
        return isSubs(s, t, m, n - 1);
    }
    #endif

    
};

int main() {
    string s1 = "abc";
    string t1 = "ahbgdc";
    string s2 = "axc";
    string t2 = "ahbgdc";

    Solution S;

    bool S1result = S.isSubsequence(s1, t2);
    bool S2result = S.isSubsequence(s2,t2);

    cout << "Test Case 1: " << bool(S1result) << endl;
    cout << "Test Case 2: " << bool(S2result) << endl;
    system("pause");

    return 0;
}