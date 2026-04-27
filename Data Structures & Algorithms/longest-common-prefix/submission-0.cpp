class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int n = 300;
        for(int i = 0; i < strs.size(); i++) {
            int sz = strs[i].size();
            n = min(n, sz);
        }
        for(int i= 0; i < n; i++) {
            
            bool ok = true;
            for(int j = 0; j < strs.size(); j++) {
               
                if(j && strs[j][i] != strs[0][i]) {
                    ok = false;
                    break;
                    
                } 
            }
            if(!ok) break;
            s+= strs[0][i];
        }
        return s;
       
    }
};