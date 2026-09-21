class Solution {
public:
    int minDistance(string word1, string word2) {
       
        int n1 = word1.length()-1;
        int n2 = word2.length()-1;
         vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        return helper(word1,word2,n1,n2,dp);  
    }
    int helper(string s1,string s2,int n1,int n2,vector<vector<int>> &dp){
        if(n1>=0 && n2<0)return n1+1;
        if(n1<0 && n2>=0)return n2+1;
        if(n1<0 && n2<0) return 0;
        int ans = INT_MAX;
        if(dp[n1][n2] != -1) return dp[n1][n2];
        if(s1[n1]==s2[n2]){
            ans = helper(s1,s2,n1-1,n2-1,dp);

        }
        ans = min(ans,min(min(helper(s1,s2,n1,n2-1,dp) , helper(s1,s2,n1-1,n2,dp)), helper(s1,s2,n1-1,n2-1,dp))+1);
        return dp[n1][n2] = ans;
    }
};