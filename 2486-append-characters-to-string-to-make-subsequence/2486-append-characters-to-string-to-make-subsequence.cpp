class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.length();
        int n = t.length();
        int j = 0;
        for(int i{0}; i < m && j < n; ++i){
            if(s[i] == t[j]) ++j;
        }
         int minimum = n - j; // remaining characters of t;
        return minimum;  
    }
};