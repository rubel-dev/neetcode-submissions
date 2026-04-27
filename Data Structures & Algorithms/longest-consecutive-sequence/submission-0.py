class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        mx = 0
        m = {}
        nums.sort()
        for u in nums:
            x = u-1
            if x in m:
                m[u] = m[x] + 1
                
            else:
                m[u] =1
            mx = max(mx, m[u])
        return mx
