class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cur = 0
        cnt = 0
        for i in range(len(nums)):
            if i ==0:
                cur = nums[i]
                cnt = 1
            else:
                if cur == nums[i]:
                    cnt = cnt + 1
                else:
                    cnt = cnt - 1
                    if cnt == 0:
                        cur = nums[i]
                        cnt = 1
        return cur
        