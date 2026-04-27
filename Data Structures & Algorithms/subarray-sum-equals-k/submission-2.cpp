class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int pre = 0;
        int ans = 0;
        m[0]++;
        for(int i = 0; i < nums.size(); i++) {
            pre += nums[i];
            
            ans += m[pre-k];
            m[pre]++;
        }
        return ans;
    }
};