class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for(int i= 0; i < nums.size(); i++) {
            if(!i) {
                mx = nums[i];
            }
            else {
                mx--;
                if(mx < 0) return false;
                mx = max(mx, nums[i]);
            }
        }
        return true;
    }
};
