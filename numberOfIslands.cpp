class Solution {
public:
    int grid_right_bound, grid_lower_bound; 
    vector<vector<char>> explored; 
    
    int valid_move(vector<vector<char>>& grid, int row, int column){
        if (row == grid_lower_bound || row < 0) return 0; 
        if (column == grid_right_bound || column < 0) return 0; 
        if (grid[row][column] == '0') return 0; 
        if (explored[row][column]) return 0; 

        return 1; 
    }

    void dfs(vector<vector<char>>& grid, int row, int column){
        if (valid_move(grid, row + 1, column)){
            explored[row + 1][column] = 1; 
            dfs(grid, row + 1, column); 
        }
        if (valid_move(grid, row, column + 1)){
            explored[row][column + 1] = 1; 
            dfs(grid, row, column + 1); 
        }
        if (valid_move(grid, row - 1, column)){
            explored[row - 1][column] = 1; 
            dfs(grid, row - 1, column); 
        }
        if (valid_move(grid, row, column - 1)){
            explored[row][column - 1] = 1; 
            dfs(grid, row, column - 1); 
        }

        return; 
    }

    int numIslands(vector<vector<char>>& grid) {
        int island_count = 0;

        grid_right_bound = grid[0].size(); 
        grid_lower_bound = grid.size(); 

        explored.resize(grid_lower_bound); 
        for (int i = 0; i < grid_lower_bound; i++){
            explored[i].resize(grid_right_bound); 
        }


        for (int i = 0; i < grid_lower_bound; i++){
            for (int x = 0; x < grid_right_bound; x++){
                if (grid[i][x] != '0' && !explored[i][x]){
                    dfs(grid, i, x); 
                    island_count += 1; 
                }
            }
        }

        return island_count; 
    }
};
