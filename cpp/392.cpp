class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        if(t.empty()) return false;

        int i = 0;
        for(auto& c : t) {
            if(c == s[i])
                i++;
            if(i == s.size())
                return true;
        }
        return i == s.size();
    }
};