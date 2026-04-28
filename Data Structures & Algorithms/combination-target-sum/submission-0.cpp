class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>cur;
        backTrack(0, cur, target, nums);
        return ans;
    }

    void backTrack(int i, vector<int>cur, int target, vector<int>nums) {
        if(target == 0) {
            ans.push_back(cur);
            return;
        }
        if(target< 0|| i >= nums.size()) {
            return;
        }
        cur.push_back(nums[i]);
        backTrack(i, cur, target-nums[i], nums);
        cur.pop_back();
        backTrack(i+1, cur, target, nums);
    }
};
