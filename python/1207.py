class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        arr = sorted(arr)
        count = 1
        counts = []
        prev = arr[0]
        for i in range(1, len(arr)):
            if(prev == arr[i]):
                count+=1
            else:
                counts.append(count)
                prev = arr[i]
                count =1
        counts.append(count)

        counts = sorted(counts)
        prev = counts[0]
        for i in range(1, len(counts)):
            if(counts[i-1] == counts[i]):
                return False
        return True
        