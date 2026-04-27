freq = []

class Solution:

    def encode(self, strs: List[str]) -> str:
        global freq
        freq = []
        c = 0
        ss = ""
        for s in strs: 
            freq.append(len(s))
            ss+=s
        return ss

    def decode(self, s: str) -> List[str]:
        global freq
        ls =[]
        st =0
        for n in freq:
            word=s[st:st+n]
            
            st = st + n
            ls.append(word)
        return ls

