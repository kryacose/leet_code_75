class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        i=0
        j=0
        count=0
        d=0
        while(j<len(nums)):
            if(nums[j]==1):
                j+=1
            elif(d==0):
                d+=1
                j+=1
            else:
                while d>0:
                    if(nums[i]==0):
                        d-=1
                    i+=1
            count = max(count, j-i-1)
        return count