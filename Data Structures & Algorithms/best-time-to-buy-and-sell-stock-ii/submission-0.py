class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        cur = 0
        for i in range(len(prices)):
            if i == 0:
                cur = prices[i]
            else:
                if prices[i] > cur:
                    ans = ans + prices[i]-cur
                    cur = prices[i]
                else:
                    cur = prices[i]
        return ans