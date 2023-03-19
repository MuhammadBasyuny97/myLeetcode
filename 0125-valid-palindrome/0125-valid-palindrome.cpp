class Solution {
public:
    bool isPalindrome(string s) {
        string s_new;
    
        
        for(auto c: s){
            if(isalnum(c)){
                s_new += tolower(c);
            }
        }
        size_t len = s_new.length();
        if(len == 0){
            return true;
        }
        for(size_t i{0}; i <= len  / 2; ++i){
            if(s_new[i] != s_new[len - 1 - i])
                return false;
        }
        return true;
    }
};