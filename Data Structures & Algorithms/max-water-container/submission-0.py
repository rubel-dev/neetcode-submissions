class Solution:
    def maxArea(self, heights: List[int]) -> int:
        ans = 0
        i = 0
        j = len(heights) -1
        while i < j:
            n = j - i
            ans = max(ans, n*min(heights[i], heights[j]))
            if heights[i] < heights[j]:
                i += 1
            else:
                j-=1
        return ans