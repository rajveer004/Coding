class Solution {
public:

    int DFS(vector<vector<int>>& grid, int i,int j){
        int r = grid.size();
        int c = grid[0].size();

        if(i >= r || i<0 || j>=c ||j<0 || grid[i][j]==0){
            return 0;
        }
        int maxgold = 0;
        int orignalvalue =grid[i][j];
        grid[i][j]=0;

        maxgold = max(maxgold,DFS(grid,i-1,j));
        maxgold = max(maxgold,DFS(grid,i+1,j));
        maxgold = max(maxgold,DFS(grid,i,j-1));
        maxgold = max(maxgold,DFS(grid,i,j+1));

        grid[i][j]=orignalvalue;
        return maxgold + orignalvalue;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        int maxGoldValue = 0;

        for(int i = 0; i < r;i++ ){
            for(int j = 0;j<c;j++){
                if(grid[i][j]!=0){
                    maxGoldValue = max(maxGoldValue,DFS(grid,i,j));
                }
            }
        }
        return maxGoldValue;
    }
};