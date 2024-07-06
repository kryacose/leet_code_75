class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        d = dict()
        for i in nums:
            if(i not in d.keys()):
                d[i] = 1
            else:
                d[i] += 1

        res = 0
        for i in d:
            if(d[i] == 0):
                continue
            if(i == k-i):
                res+=d[i]//2
            elif(k-i in d):
                res+=min(d[k-i],d[i])
                d[k-i] = 0

        return res