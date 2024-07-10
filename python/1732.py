class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        cur = 0
        malt = 0
        for i in gain:
            cur+=i
            malt = max(malt, cur)
        return malt
        