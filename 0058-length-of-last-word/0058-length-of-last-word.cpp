class Solution {
public:
    int lengthOfLastWord(string s) {
      int i = s.length() - 1;
     while(s[i]== ' '){
         s.pop_back();
         --i;
      } 
        i = s.length() - 1;
        int length {0};
        while(i>=0 && s[i] != ' ' && !s.empty()){
            length++;
            s.pop_back();
            --i;  
            
        }
        return length;
    }
};