class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
       vector<pair<float,int>> vp;
       for(vector<int> rec : dimensions){
        int area = rec[0]*rec[1];
        float d = sqrt(rec[0]*rec[0] + rec[1]*rec[1]);
        vp.push_back({d,area});
       } 
       sort(vp.begin(),vp.end());
       return vp[vp.size()-1].second;
    }
};