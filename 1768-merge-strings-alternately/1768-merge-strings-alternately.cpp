class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int n1 = word1.length();
        int n2 = word2.length();
        int n = (n1 <= n2 ? n1 : n2);
        
        int i {0};
        
        while(i < max (n1,n2)){
            if(i < n1) merged += word1[i];
            if(i < n2) merged += word2[i];    
            ++i;
        }
     
        return merged;
        
    }
};