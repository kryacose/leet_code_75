class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        res+=chars[0];
        char last = chars[0];
        int count = 1;
        for(int i=1; i<chars.size(); i++) {
            if(chars[i]==res.back()) 
                count++;
            else {
                if(count>1)
                    res+=to_string(count);
                res+=chars[i];
                count =1;
            }
        }
        if(count>1)
                res+=to_string(count);
        
        chars.clear();
        for(auto& c : res)
            chars.push_back(c);

        return res.size();
    }
};