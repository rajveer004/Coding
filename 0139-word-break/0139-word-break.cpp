class Solution {
public:
    unordered_set<string> st;
    vector<int>dp;
    bool solve(int idx,string &s){
       if(idx >= s.length()){
        return true;
       }
       if(dp[idx]!=-1){
        return dp[idx];
       }
       for(int i = 1;i<=s.length();i++){
        string temp = s.substr(idx,i);
        if(st.find(temp)!= st.end() && solve(idx+i,s)){
            return dp[idx] = true;
        } 
       }
       return dp[idx]=false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for(string d: wordDict){
            st.insert(d);
        }
        dp = vector<int>(301,-1);
        return solve(0,s);
        
    }
};