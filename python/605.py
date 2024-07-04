class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 1
        for flower in flowerbed:
            if(flower==0):
                count+=1
                continue
            n-=(count-1)//2
            count = 0
            if(n<=0):
                break
        n-=(count)//2
        return n<=0
            


        