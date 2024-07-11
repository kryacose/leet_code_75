class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for(auto& i : nums1) set1.insert(i);
        for(auto& i : nums2) set2.insert(i);

        vector<vector<int>> res(2);

        for(auto& i : set1) {
            if(set2.find(i)==set2.end())
                res[0].push_back(i);
        }     
        for(auto& i : set2) {
            if(set1.find(i)==set1.end())
                res[1].push_back(i);
        }   

        return res;
    }
};