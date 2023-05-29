class Solution {
public:
    bool checkZeroOnes(string s) {
      int i{0}, j{0};
      int max_ones{0};
      int max_zeroes{0};
      int n = s.length();
        
      while(j  < n){
          i = j;
          while(j < n && s[i] == s[j] )j++;
          
          if(s[i] == '1')
              max_ones = max(max_ones, j - i);
          else
              max_zeroes = max(max_zeroes, j - i);              
      }
        return max_zeroes < max_ones;
    }
};