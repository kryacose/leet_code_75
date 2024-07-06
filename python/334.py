class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        val = [float('inf')]*2
        for num in nums:
            if(num<=val[0]):
                val[0] = num
            elif(num<=val[1]):
                val[1] = num
            else:
                return True
        return False