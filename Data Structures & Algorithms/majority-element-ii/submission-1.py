class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        canditate1 = -1
        canditate2 = -1
        cnt1 = 0
        cnt2 = 0
        ans = []
        n = len(nums)
        for num in nums: 
            if num == canditate1:
                cnt1 +=1
            elif num == canditate2:
                cnt2 +=1
            elif cnt1 == 0:
                canditate1 = num
                cnt1 = 1
            elif cnt2 == 0:
                canditate2 = num
                cnt2 = 1
            else:
                cnt1 = cnt1 - 1
                cnt2 = cnt2 - 1
        c1 = 0
        c2 = 0
        for num in nums:
            if num == canditate1:
                c1 = c1 + 1
            if num == canditate2:
                c2 = c2 + 1
        if c1*3 > n:
            ans.append(canditate1)
        if c2*3 > n:
            ans.append(canditate2)
        return ans