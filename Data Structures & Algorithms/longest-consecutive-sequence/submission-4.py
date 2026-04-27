class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums)
        ans = 0
        for num in numSet:
            cnt = 1
            if (num-1) not in numSet:
                while (num + cnt) in numSet:
                    cnt = cnt + 1
                ans  =max(ans, cnt)
        return ans
