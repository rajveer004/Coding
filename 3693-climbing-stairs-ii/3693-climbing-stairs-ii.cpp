class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        int dp[n + 1];
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            dp[i] = INT_MAX;
            for (int j = i - 1; j >= i - 3 && j >= 0; j--) {
                dp[i] = min(dp[i],dp[j] + costs[i-1] + (i-j)*(i-j));
            }
        }
        return dp[n];
    }
};