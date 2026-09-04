class Solution {
public:
    string largestNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end(),[](int &a,int &b){
        string A = to_string(a);
        string B = to_string(b);
        return A+B > B+A;
       });
       if(nums[0]==0)return "0";
       string ans="";
       for(int ele:nums){
        ans += to_string(ele);
       }
       
       return ans;
    }
};