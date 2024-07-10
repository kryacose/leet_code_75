class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        part = 0

        for i in range(len(nums)):
            if(total-part-nums[i] == part):
                return i
            part+=nums[i]
        return -1