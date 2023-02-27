class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t s_len {s.length()};
        int length{0};
        if(s_len == 1){
            return ++length;
        }
        for(size_t i{s_len -1}; i >= 0; --i){
            if(isalpha(s[i])){
                ++length;
              if( i == 0){
                   break;
              }
              else if (s[i-1] == ' '){
                  break;
              }
                  
            }
            
        }
        return length;
    }
};