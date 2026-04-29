class Solution {
public:
    vector<int>dp;
    int rec( int cur, int n) {
        if(cur >=n) return cur == n;
        if(dp[cur] != -1) return dp[cur];
        
        return dp[cur] = rec(cur + 1, n) + rec(cur+2, n);
    }
    int climbStairs(int n) { 
        dp.resize(n, -1);
        return rec( 0, n);

    }
};
