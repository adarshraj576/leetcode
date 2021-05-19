// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j==0){
                    grid[i][j] = grid[i][j];
                }
                
                else if(i==0){
                    grid[i][j] += grid[i][j-1];
                }
                
                else if(j==0){
                    grid[i][j] += grid[i-1][j];
                }
                else{
                    grid[i][j] += min(grid[i][j-1],grid[i-1][j]);
                }
            }
        } 
        return grid[n-1][m-1]; 
    }
};