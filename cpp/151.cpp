class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int len = 0;
        vector<string> vec;
        for(int i=0; i< s.size(); i++) {
            if(s[i] == ' ') {
                if(len > 0)
                    vec.push_back(s.substr(start, len));
                len = 0;
                continue;
            }
            if(len == 0) 
                start = i;
            len++;
        }
        if(len>0)
            vec.push_back(s.substr(start, len));

        string res = "";
        for(int i=0; i<vec.size(); i++) {
            res+=vec[vec.size() -1 - i];
            if(i<vec.size()-1)
            res+=" "; 
        }
        return res;
    }
};