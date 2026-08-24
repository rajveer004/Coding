class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=nums.size();
        int i =0; 
        for(int j=1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                count--;
                continue;
            }else{
                i++;
                nums[i]=nums[j];
            }
        }
        return count;
    }
};