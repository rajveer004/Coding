class Solution {
public:
    int maxSum(vector<int>& nums){
        int n = nums.size();
        int curr =nums[0];
        int maxSum =nums[0];
        if(n==1)return maxSum;
        for(int i=1;i<n;i++){
            if(curr<0){
                curr = nums[i];
            }else{
                curr = curr + nums[i];
            }
            maxSum =max(curr,maxSum);
        }
        return maxSum;
    }
    int minSum(vector<int>& nums){
        int n = nums.size();
        int curr =nums[0];
        int minSum =nums[0];
        if(n==1)return minSum;
        for(int i=1;i<n;i++){
           curr = min(nums[i],curr + nums[i]);
            minSum =min(curr,minSum);
        }
        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total=0;
        for(int e : nums){
           total+=e;
        }
        int maxsum = maxSum(nums);
        int minsum = minSum(nums);
        if(maxsum<0)return maxsum;
        return max(maxsum,total-minsum);
    }
};