class Solution {
    unordered_set<char> vowels= {'a','e','i','o','u'};
    inline int isVowel(char c) {
        if(vowels.find(c) != vowels.end())
            return 1;
        return 0;
    }
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0;i<k;i++)
            count+=isVowel(s[i]);
        int max_count = count;
        for(int i=k;i<s.size();i++) {
            count+=(isVowel(s[i])-isVowel(s[i-k]));
            max_count = max(count, max_count);

        }
        return max_count;
    }
};