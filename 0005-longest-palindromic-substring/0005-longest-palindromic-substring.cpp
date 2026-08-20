class Solution {
public:
    
    bool checkPalindrome(string& s, int i, int j) {
        if (i >= j)
            return true;
        if (s[i] == s[j]) {
            return checkPalindrome(s, i+1, j-1);
        }
        return false;
    }

    string longestPalindrome(string s) {
        int idx = -1;
        int size = INT_MIN;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkPalindrome(s, i, j) == true) {
                    if (j - i + 1 > size) {
                        idx = i;
                        size = j - i + 1;
                    }
                }
            }
        }
        return s.substr(idx, size);
    }
};