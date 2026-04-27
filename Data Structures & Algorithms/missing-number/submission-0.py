class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        xr = 0
        n = len(nums)
        for x in nums:
            xr = xr ^ x
        for i in range(0, n+1):
            xr ^= i
        return xr