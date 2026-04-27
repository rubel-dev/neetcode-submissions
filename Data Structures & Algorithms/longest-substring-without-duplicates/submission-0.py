class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        st = set()
        n = len(s)
        i = 0
        j = 0
        ans = 0
        while j < n: 
            if s[j] in st:
                while i < j and s[j] != s[i]:
                    st.remove(s[i])
                    i = i + 1
                     
                i = i + 1
                j = j + 1
                
            else:
                st.add(s[j])
                ans = max(ans, j - i + 1)
                j = j + 1
                
        return ans
        