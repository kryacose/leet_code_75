class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        num_z = 0

        for i in range(len(nums)):
            if(nums[i]==0):
                num_z+=1
            else:
                nums[i], nums[i-num_z] = nums[i-num_z], nums[i]