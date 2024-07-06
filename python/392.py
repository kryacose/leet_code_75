class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0
        if(len(s) == 0):
            return True
        if(len(t) == 0):
            return False
        for c in t:
            if(c == s[i]):
                i+=1
            if(i==len(s)):
                return True

        return i==len(s)

