class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int count = 0;
        int max_count = 0;
        int d = 0;
        int j=0;
        while(j<nums.size()) {
            if(nums[j] == 1) 
                j++;
            else if(d == 0) {
                d++;
                j++;
            }
            else {
                if(nums[i] == 0)
                    d--;
                i++;
            }
            count = max(count, j-i-1);
            
        }
        return count;
    }
};