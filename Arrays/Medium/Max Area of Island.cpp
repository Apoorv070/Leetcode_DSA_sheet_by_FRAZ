
class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int x, int y, int row, int col){
        if(x>=row || x<0 || y>=col || y<0|| grid[x][y]==0) return 0;
        grid[x][y]=0;
        return 1+dfs(grid,x+1,y,row,col)+dfs(grid,x-1,y,row,col)+dfs(grid,x,y+1,row,col)+dfs(grid,x,y-1,row,col);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int area=0;
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(grid[i][j]){
                    area = max(area,dfs(grid,i,j,row,col));
                }
            }
        }
        return area;
    }
};
