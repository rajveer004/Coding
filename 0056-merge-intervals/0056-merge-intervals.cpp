class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(vector<int> arr : intervals){
            if(ans.empty() || ans.back()[1]< arr[0]){
                ans.push_back(arr);
            }else{
                ans.back()[1]=max(ans.back()[1],arr[1]);
            }
        }
        return ans;
        
    }
};