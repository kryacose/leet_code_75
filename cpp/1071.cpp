class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b); 
    }
    
    string gcdOfStrings(const string& str1, const string& str2) {
        if(str1+str2 != str2+str1) return "";
        return str1.substr(0, gcd(str1.size(), str2.size()));
    }
};