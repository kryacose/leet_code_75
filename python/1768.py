class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ['']
        for i in range(min(len(word1), len(word2))):
            result.extend(word1[i]+word2[i])
        if len(word1) > len(word2):
            result.extend(word1[len(word2):])
        else:
            result.extend(word2[len(word1):])

        return ''.join(result)
        