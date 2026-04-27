class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        r = len(numbers)-1
        l = 0
        ans = []
        while l <= r:
            if numbers[l] + numbers[r] == target:
                ans.append(l+1)
                ans.append(r+1)
                break;
            elif numbers[l]+numbers[r] < target:
                l = l + 1
            else:
                r = r - 1

        return ans