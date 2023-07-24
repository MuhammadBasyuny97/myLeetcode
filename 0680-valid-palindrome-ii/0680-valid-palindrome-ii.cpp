class Solution {
public:
    bool helper(string s, int i, int j){
        while(i < j){
            if(s[i] == s[j]){
                --j;
                ++i;
            }
            else {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
         int n = s.length();
          for(int i{0}; i < n / 2; ++i){
              int j = n - 1 - i;
            if(s[i] != s[j]) {
                return helper(s,i+1,j) || helper(s, i, j-1);
            }
          }
       return true;
    }
};