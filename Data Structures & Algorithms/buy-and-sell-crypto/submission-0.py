class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        i = 0
        j = 0
        n = len(prices) - 1
        ans = 0
        while j <=n:

            if prices[i] <= prices[j]:
                ans  = max(ans, prices[j]-prices[i])
                j = j  + 1
            else:
                while i < j and prices[i] > prices[j]:
                    i = i + 1
        return ans           