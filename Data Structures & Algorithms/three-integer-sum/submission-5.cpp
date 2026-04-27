class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i && (nums[i] == nums[i-1]))continue;
            if(nums[i] > 0) break;
            int l = i + 1, r = nums.size() - 1;

            while(l < r) {
                int x = nums[i] + nums[l] + nums[r];
                if(x > 0) {
                    r--;
                }
                else if(x < 0) {
                    l++;
                }
                else {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++,r--;
                    while(l < r && (nums[l] == nums[l-1])){
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};
