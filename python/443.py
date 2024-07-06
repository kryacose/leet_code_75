class Solution:
    def compress(self, chars: List[str]) -> int:
        last = chars[0]
        count = 0
        res = chars[0]
        for c in chars:
            if(c == last):
                count+=1
            else:
                if count>1:
                    res+=str(count)
                last = c
                count = 1
                res+=c
        if count>1:
            res+=str(count)
        
        chars.clear()
        for i in range(len(res)):
            chars.append(res[i])

        print(chars)
        return len(chars)

        