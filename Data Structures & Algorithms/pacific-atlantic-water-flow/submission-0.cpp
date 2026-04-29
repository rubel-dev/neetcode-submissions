class Solution {
public:
    int n, m;
    vector<pair<int,int>>dir = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}
    };

    void dfs(vector<vector<int>>& heights, vector<vector<bool>>&vis, int i, int j){
        vis[i][j] = true;
        for(auto u: dir) {
            int ni = i + u.first;
            int nj = j + u.second;
            if(ni>=n||ni < 0||nj >=m||nj < 0){
               continue;
            }
            if(vis[ni][nj]) continue;
            if(heights[ni][nj] < heights[i][j]) continue;
            dfs(heights, vis, ni, nj);
            
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
         n = heights.size();
         m = heights[0].size();

        vector<vector<bool>>pac(n, vector<bool>(m, false));
        vector<vector<bool>>atl(n, vector<bool>(m, false));
        for(int i= 0; i < n; i++) {
            dfs(heights, pac, i, 0);
        }
        for(int i = 0; i < m; i++) {
            dfs(heights, pac, 0,i );
        }
        for(int i= 0; i < n; i++) {
            dfs(heights, atl, i, m-1);
        }
        for(int i = 0; i < m; i++) {
            dfs(heights, atl, n-1,i );
        }
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(pac[i][j] && atl[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;

    }
};