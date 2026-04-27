class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        mp = {}
        ans = []
        for num in nums:
            if num in mp:
                mp[num] +=1
            else:
                mp[num] = 1
        for i in range(-50000, 50001):
            if i not in mp:
                continue
            cnt = mp[i]
            while cnt:
                ans.append(i)
                cnt = cnt - 1
        return ans
