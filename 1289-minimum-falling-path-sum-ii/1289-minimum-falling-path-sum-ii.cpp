class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
       int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> dp(r, vector<int>(c, INT_MAX));
        for (int i = r - 1; i >= 0; i--) {
            int minn =0;
            for (int j = c - 1; j >= 0; j--) {
                if (i == r - 1)
                    dp[i][j] = grid[i][j];
                else{
                    int minn =INT_MAX;
                    for(int k = 0;k<c;k++){
                        if(k!=j)
                          minn = min(minn,dp[i+1][k]);
                    }
                    dp[i][j]=minn+grid[i][j];
                }
            }
        }
        sort(dp[0].begin(),dp[0].end());
        return dp[0][0];
    }
};