class Solution:
    def getSum(self, a: int, b: int) -> int:
        ans = a | b
        x = a & b
         
        ans = ans + x
        return ans
