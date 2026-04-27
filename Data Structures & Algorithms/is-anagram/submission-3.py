class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        cnt = [0] * 26  
        for x in s:
            cnt[ord(x) - ord('a')] += 1   

        for x in t:
            if cnt[ord(x) - ord('a')] <= 0:
                return False
            cnt[ord(x) - ord('a')] -= 1

        return True