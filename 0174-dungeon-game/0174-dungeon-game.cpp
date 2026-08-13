class Solution {
public:
    int r;
    int c;
    vector<vector<int>> dp ;
    int solve(int i,int j,vector<vector<int>> &dungeon){
        if(i >= r || j >= c){
            return 1e9;         // 200*200*1000 = 4*10 power 7 
        }
         if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i == r-1 && j == c-1){
            if(dungeon[i][j]<0){
                return abs(dungeon[i][j])+1;
            }else{
                return 1;
            }
        }
       
        int right = solve(i,j+1,dungeon);
        int down = solve(i+1,j,dungeon);
        int result = min(right,down) - dungeon[i][j];
        return dp[i][j] = (result>0)?result:1;
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
       r=dungeon.size(); 
       c=dungeon[0].size();
        dp = vector<vector<int>>(r,vector<int>(c,-1));
        return solve(0,0,dungeon);
    }
};