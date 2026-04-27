class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1 = sorted(s1)
        j = 0
        n = len(s2)
        l = len(s1)
        while j < n:
            st = s2[j:j+l]
            st = sorted(st)
            if st == s1:
                return True
            j = j + 1
        return False
