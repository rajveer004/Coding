class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n =nums.size();
        int sum =0;
        int count=0;
        int i=0;
        while(i<n){
            sum+=nums[i];
            if(sum==0)count++;
            i++;
        }
        return count;
    }
};