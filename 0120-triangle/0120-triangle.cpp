class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int r = triangle.size();
        int c = triangle[r - 1].size();
        vector<vector<int>> dp(r, vector<int>(c, INT_MAX));
        for (int i = r - 1; i >= 0; i--) {
            for (int j = triangle[i].size() - 1; j >= 0; j--) {
                if (i == r - 1)
                    dp[i][j] = triangle[i][j];
                else
                    dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]) + triangle[i][j];    
            }
        }
        return dp[0][0];
    }
};