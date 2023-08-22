class Solution {
public:
    string removeDuplicates(string s) {
         string str;
        for(int i{0}; i < s.length(); ++i){
            int n = str.length();
            if(n == 0) str.push_back(s[i]);
            else if(s[i] == str[n-1]) str.pop_back();
            else str.push_back(s[i]);
            }
        return str;
    }
};