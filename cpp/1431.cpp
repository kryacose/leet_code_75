class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        const auto maxCandies = *std::max_element(candies.begin(), candies.end());
        vector<bool> res(candies.size());
        for(int i=0; i<candies.size(); i++) 
            res[i] = bool(candies[i]+extraCandies>=maxCandies);
        return res;
    }
};