class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(char ch: s) {
            if(isalnum(ch)){
                ss+=tolower(ch);
            }
        }
        return ss ==string(ss.rbegin(), ss.rend());
    }
};
