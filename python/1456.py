vowels = set('aeiou')
def isVowel(c):
    if(c in vowels):
        return 1
    return 0

class Solution:

    def maxVowels(self, s: str, k: int) -> int:
        count = 0
        for i in range(k):
            count+=isVowel(s[i])
        
        max_count = count
        for i in range(k, len(s)):
            count+=(isVowel(s[i])-isVowel(s[i-k]))
            max_count = max(max_count, count)
        return max_count
        
        