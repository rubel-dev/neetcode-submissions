class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>cnt(30000);
        
        vector<int>ans;
        int n = 2e4 + 10;
        vector<int>un;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) {
                nums[i] +=n;
            }
            if(cnt[nums[i]] == 0) un.push_back(nums[i]);
            cnt[nums[i]]++;
            
        }
        vector<int>v[100000+5];
        for(int i = 0; i < un.size(); i++) {
            int x = un[i];
            if(x > 10000) {
                x-=n;
            }
            v[cnt[un[i]]].push_back(x);
        }
        for(int i= n; i >=0; i--) {
            if(v[i].size()) {
                for(int j  = 0; j < v[i].size(); j++) {
                    
                    ans.push_back(v[i][j]);
                    k--;
                    if(k == 0) {
                        return ans;
                    }
                }
            }
        }
       return ans;
    }
     
};