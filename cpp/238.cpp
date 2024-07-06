class Solution {
public:
    
    void print(vector<int> vec) {
        for(auto& ii : vec)
            cout<<ii<<" ";
        cout<<endl;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res = nums;
        for(int i=1;i<nums.size();i++) 
            nums[i]*=nums[i-1];
        for(int i=res.size()-2;i>=0;i--)
            res[i]*=res[i+1];

        res[0] = res[1];
        for(int i=1; i<res.size()-1;i++) 
            res[i] = res[i+1]*nums[i-1];
        res[res.size()-1] = nums[nums.size()-2];
        return res;
    }   
};