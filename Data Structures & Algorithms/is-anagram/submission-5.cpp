class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        for(char ch ='a'; ch <='z'; ch++) {
            int c1 = 0, c2 = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == ch)c1++;
                if(t[i] == ch) c2++;
            }
            if (c1 != c2) return false;
        }
        return true;
    }
};
