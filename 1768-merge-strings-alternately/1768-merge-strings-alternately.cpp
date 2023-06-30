class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int n1 = word1.length();
        int n2 = word2.length();
        int n = (n1 <= n2 ? n1 : n2);
        
        for(int i{0}; i < n; ++i){
            merged += word1[i] ; 
            merged += word2[i] ; 
        }
        while(n < n1){
            merged += word1[n];
            ++n;
        }
        while(n < n2){
            merged += word2[n];
             ++n;
        }
        return merged;
        
    }
};