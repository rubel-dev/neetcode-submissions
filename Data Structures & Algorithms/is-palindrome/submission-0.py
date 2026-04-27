class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.replace(" ","")
        s = s.lower()
        i = 0
        n = len(s)
        j = n-1
        while i <= j:
            if s[i].isalnum() and s[j].isalnum():
                if s[i] != s[j]:
                    return False
                else:
                    i = i + 1
                    j = j - 1
            elif s[i].isalnum():
                j = j - 1
            else:
                i = i + 1
        return True



