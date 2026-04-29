class Solution {
public:
    void dfs(int u, vector<bool>&vis, vector<vector<int>>&adj) {
        vis[u] = 1;
        for(auto v: adj[u]) {
            if(!vis[v]) {
                dfs(v, vis, adj);
            }
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
       vector<vector<int>>adj(n);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = 0;
        vector<bool>vis(n, false);
        for(int i= 0; i < n; i++) {
            if(!vis[i]) {
                ans++;
                dfs(i, vis, adj);
            }
        }
        if(ans == 1 && n == (edges.size() + 1)) {
            return true;
        }
        return false;

    }
};
