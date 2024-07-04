class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 1;
        for(auto& ff : flowerbed) {
            if(ff == 0) {
                count++;
                continue;
            }
            n -= (count-1)/2;
            count = 0;
            if(n<=0)
                break;
        }
        n -= (++count-1)/2;
        return n<=0;
    }
};