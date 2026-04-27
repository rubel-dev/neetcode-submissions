class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            int correct = nums[i] - 1;
            if(1 <= nums[i] && nums[i] <= n && nums[i] !=nums[correct] ){
                swap(nums[i] , nums[correct]);
            }
            else {
                i++;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if((i + 1) != nums[i]) {
                return (i + 1);
            }
        }
        return n + 1;
    }
};