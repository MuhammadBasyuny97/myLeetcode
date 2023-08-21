class Solution {
public:
    
     string deleteBackspace(string s){
        int n = s.length();
        int count = 0;
        string new_str;
        for(int i{n-1}; i >= 0; --i){
            if(count == 0 && s[i] != '#'){
                new_str += s[i];
            }
            else if(s[i] == '#'){
                count++;
            }
            else {
                count--;
            }
        }
        return new_str;
    }
    bool backspaceCompare(string s, string t) {
        s = deleteBackspace(s);
        t = deleteBackspace(t);
        return s == t;
    }
};