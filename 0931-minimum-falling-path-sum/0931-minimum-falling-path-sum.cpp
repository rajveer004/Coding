class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>> dp(r, vector<int>(c, INT_MAX));
        for (int i = r - 1; i >= 0; i--) {
            for (int j = c - 1; j >= 0; j--) {
                if (i == r - 1)
                    dp[i][j] = matrix[i][j];
                else if(j == 0)
                    dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]) + matrix[i][j];
                else if(j == c-1)
                    dp[i][j] = min(dp[i+1][j],dp[i+1][j-1]) + matrix[i][j];
                else
                    dp[i][j] = min({dp[i+1][j+1],dp[i+1][j],dp[i+1][j-1]})
                     + matrix[i][j];        
            }
        }
        sort(dp[0].begin(),dp[0].end());
        return dp[0][0];
    }
};