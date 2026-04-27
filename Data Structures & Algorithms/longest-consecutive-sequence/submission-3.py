class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
         
        nums_set = set(nums)
        mx = 0
        for num in nums_set:
            if num-1 not in nums_set:
                c = 1
                cur = num
                while (cur + 1) in nums_set:
                    cur = cur + 1
                    c = c + 1
                mx = max(mx, c)
                  
        return mx
