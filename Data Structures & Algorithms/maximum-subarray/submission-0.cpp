class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int sm = 0;
        for(int i = 0; i < nums.size(); i++) {
            sm+=nums[i];
            if(sm <= 0) {
                mx = max(mx, nums[i]);
                sm = 0;
                
            }
            else mx = max(mx, sm);
            
        }
        return mx;
    }
};
