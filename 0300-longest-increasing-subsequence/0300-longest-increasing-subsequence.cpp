class Solution {
public:
    int helper(vector<int> &nums,int idx,int prev,vector<vector<int>>&dp){
        
        if(idx == nums.size())return 0;
        if(dp[idx][prev+1]!=-1)return dp[idx][prev+1];

        int notTaken = helper(nums,idx+1,prev,dp);
        int taken =0;
        if(prev == -1 || nums[idx] > nums[prev]){
            taken = 1 + helper(nums,idx +1,idx,dp);
        }
        return dp[idx][prev+1] = max(taken,notTaken);
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int n =nums.size();
        int idx=0;
        int prev =-1;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
     return helper(nums,idx,prev,dp);
    }
};