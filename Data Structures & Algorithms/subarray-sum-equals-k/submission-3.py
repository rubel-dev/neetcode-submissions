class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        m = {0:1}
        pre = 0
        ans = 0
        for x in nums:
            pre = pre + x
            ans += m.get(pre-k,0)
            m[pre] = m.get(pre, 0) + 1
        return ans

        
        