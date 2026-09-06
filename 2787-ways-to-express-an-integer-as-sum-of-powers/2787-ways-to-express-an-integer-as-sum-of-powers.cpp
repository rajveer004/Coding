class Solution {
public:

     const int MOD = 1e9 + 7;

    long long power(int num,int x){
        long long ans =1;
        for(int i=0;i<x;i++){
            ans *=num;
        }
        return ans;
    }

    int solve(int n,int num,int x,vector<vector<int>>&dp){
        long long powVal = power(num,x);

        if(n==0)return 1;
        if(n<0 || powVal > n)return 0;
        if(dp[n][num]!=-1)return dp[n][num];
        
        return dp[n][num] = (solve(n - powVal,num+1,x,dp) + solve(n,num+1,x,dp))%MOD;
    }

    int numberOfWays(int n, int x) {
        int num=1;
        int maxNum = pow(n,1.0/x)+2;
        vector<vector<int>> dp(n+1,vector<int>(maxNum,-1));
        return solve(n,num,x,dp);
    }
};