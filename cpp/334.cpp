class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int val[2] = {INT_MAX, INT_MAX};
        for(auto& num : nums) {
            if(num<=val[0])
                val[0] = num;
            else if(num<=val[1])
                val[1] = num;
            else
                return true;
        }
        return false;
    }
};