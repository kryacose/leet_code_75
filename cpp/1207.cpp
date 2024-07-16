class Solution {
public:

    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count=1;
        int prev = arr[0];
        vector<int> counts;
        for(int i=1; i<arr.size(); i++) {
            auto& a = arr[i];
            if(prev==a)
                count++;
            else {
                counts.push_back(count);
                count=1;
                prev = a;
            }
        }
        counts.push_back(count);

        sort(counts.begin(), counts.end());
        prev = counts[0];
        cout<<counts.size();
        for(int i=1; i<counts.size(); i++) {

            if(counts[i]==prev) 
                return false;
            prev = counts[i];
        }
        return true;
    }
};