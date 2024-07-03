class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string arr = "";
        for(int i=0; i<std::min(word1.size(), word2.size()); i++) {
            arr+= word1[i];
            arr+= word2[i];
        }

        if(word1.size() > word2.size()) {
            for(int i=0; i<word1.size() - word2.size(); i++)
                arr+= word1[word2.size() + i];
        }
        else {
            for(int i=0; i<word2.size() - word1.size(); i++)
                arr+= word2[word1.size() + i];
        }
        
        return arr;
    }
};