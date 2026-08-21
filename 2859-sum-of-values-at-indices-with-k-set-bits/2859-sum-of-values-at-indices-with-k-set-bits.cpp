class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int count =0;
            int n=i;
            while(n>0){
                n = n & (n - 1);
                count++;
            }
            if(count==k){
                sum += nums[i];
            }
        }
        return sum;
    }
};