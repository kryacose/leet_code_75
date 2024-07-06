class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num_z = 0;
        for(int i=0;i<nums.size(); i++) {
            if(nums[i]==0)
                num_z++;
            else
                swap(nums[i-num_z],nums[i]);
        }
    }
};