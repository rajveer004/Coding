bool comp(pair<int,int>a , pair<int,int>b){
            return a.second > b.second;
        }
class Solution {
public:
        
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n =nums.size();
      vector<pair<int,int>> vp;
      for(int i=0;i<n;i++){
        vp.push_back({i,nums[i]});
        }
        sort(vp.begin() , vp.end() ,comp );

        sort(vp.begin(),vp.begin()+k);

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vp[i].second);
        }
        return ans;
    }
    
};