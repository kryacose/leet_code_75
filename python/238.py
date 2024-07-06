class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = nums[::]

        for i in range(1,len(nums)):
            nums[i]*=nums[i-1]
            
        for i in range(len(res)-2,-1,-1):
            res[i]*=res[i+1]
        
        res[0] = res[1]
        for i in range(1, len(res)-1):
            res[i] = res[i+1]*nums[i-1]
        res[-1] = nums[-2]

        return res
