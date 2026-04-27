class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n + 2), suf(n + 2);
        for(int i = 0; i < n; i++) {
            if(!i) {
                pre[i] = nums[i];
            }
            else {
                pre[i] = pre[i-1] * nums[i];
            }
        }
         for(int i = n-1; i >= 0; i--) {
            if(i == n-1) {
                suf[i] = nums[i];
            }
            else {
                suf[i] = suf[i+1] * nums[i];
            }
        }
        vector<int> ans(n);
        for(int i= 0; i < n; i++) {
            if(!i) {
                ans[i] = suf[i + 1];
            }
            else if(i == n-1) {
                ans[i] = pre[i-1];
            }
            else {
                ans[i] = pre[i-1] * suf[i + 1];
            }
        }
        return ans;


    }
};