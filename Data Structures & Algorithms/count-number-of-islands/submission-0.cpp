class Solution {
public:
    vector<pair<int,int>>dir = {
        {1, 0},
        {-1,0},
        {0, 1},
        {0, -1}
    };
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        if(i>=n|| j >=m||i < 0||j <0||grid[i][j] =='0') {
            return;
        }
        grid[i][j] ='0';
        for(auto u: dir) {
            int n1 = i + u.first;
            int n2 = j + u.second;
            dfs(grid, n1, n2);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i =0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] =='1') {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};