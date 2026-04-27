class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        mx = 0
        m = {}
        
        for u in nums:
             m[u] = 1
        
        done = {}
        for u in nums:
            if u in done:
                continue
            c = 0
            x = u
            while x in m:
                done[x] = 1;
                c = c + 1
                x = x + 1 
            mx = max(mx, c)
        
        return mx
