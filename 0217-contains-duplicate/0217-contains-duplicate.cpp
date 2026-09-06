class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      int n = nums.size();
      if(n==1)return false;  
      sort(nums.begin(),nums.end());
      int j=1;
      for(int i=0;i<n-1;i++){
        if(nums[i]==nums[j])return true;
        j++;
      }
       return false; 
    }
};