class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        vector<int>dp(mx+1,0);
        for(int x :nums){
            dp[x] += x;
        }
        vector<int>ans;
        for(int i=0;i<=mx;i++){
            if(dp[i]!=i){
                ans.push_back(i);
            }
        }
        if(ans.size()==1)ans.push_back(0);
        return ans;
    }
};