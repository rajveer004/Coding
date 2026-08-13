class Solution {
public://by tabulization
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r =dungeon.size();
        int c =dungeon[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));

        for(int  i = r-1 ; i >= 0 ;i--){
            for (int j = c-1 ;j >= 0;j--){
                if(i == r-1 && j == c-1){
                    dp[i][j] =(dungeon[i][j]>0)?1:abs(dungeon[i][j])+1;
                }else if(i == r-1){
                    int right = dp[i][j+1]-dungeon[i][j];
                    dp[i][j] = (right >0)?right:1;
                }else if(j == c-1){
                    int down = dp[i+1][j]-dungeon[i][j];
                    dp[i][j] =(down>0)?down:1;    
                }else{
                    int right = dp[i][j+1];
                    int down = dp[i+1][j];
                    int result =min(right,down) -dungeon[i][j];
                    dp[i][j] = (result>0)?result:1;
                }
            }
        }
        return dp[0][0];
    }
};