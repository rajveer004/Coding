class Solution {
public:
   
    int checkPalindrome(string& s, int i, int j, vector<vector<int>> &dp) {
        if (i >= j)
            return dp[i][j]=1;
        if(dp[i][j]!= -1)return dp[i][j];    
        if (s[i] == s[j]) {
            return dp[i][j] = checkPalindrome(s, i+1, j-1,dp);
        }
        return dp[i][j]=0;
    }

    string longestPalindrome(string s) {
         vector<vector<int>> dp(1001, vector<int>(1001, -1));
        int idx = -1;
        int size = INT_MIN;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkPalindrome(s, i, j,dp) == 1) {
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