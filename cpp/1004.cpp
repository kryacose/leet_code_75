class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int flips = 0;
        int max_count = 0;
        int count = 0;
        while(j<nums.size()) {
            if(nums[j] == 1) {
                j++;
            }
            else if(flips<k) {
                flips++;
                j++;
            }
            else {
                if(nums[i]==0)
                    flips--;
                i++;
            }
            max_count = max(max_count, j-i);

        }
        return max_count;
    }
};