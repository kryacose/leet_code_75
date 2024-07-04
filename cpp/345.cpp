class Solution {
public:
    inline char isVowel(const char& c) {
        return (c=='a') or (c=='e') or (c=='i') or (c=='o') or (c=='u') or (c=='A') or (c=='E') or (c=='I') or (c=='O') or (c=='U');
    }
    string reverseVowels(string s) {
        int i=0;
        int j = s.size()-1;
        char t;
        while(i<j) {
            while(not isVowel(s[i]) and i<j) i++;
            while(not isVowel(s[j]) and j>i) j--;

            t = s[i];
            s[i] = s[j];
            s[j] = t;

            i++;
            j--;
        }
        return s;
    }
};