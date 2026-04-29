class Solution {
public:

    int rec(vector<int>&dp, int cur, int n) {
        if(cur == n) return 1;
        if(cur > n) return 0;
        if(dp[cur] != -1) return dp[cur];
        int ans = rec(dp, cur + 1, n);
        ans += rec(dp, cur + 2, n);
        return dp[cur] = ans;
    }
    int climbStairs(int n) {
        vector<int>dp(n, -1);
        
        return rec(dp, 0, n);

    }
};
