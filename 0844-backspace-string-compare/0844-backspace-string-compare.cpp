class Solution {
public:
    //Solution 1
    /* string deleteBackspace(string s){
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
    }*/
    
    //======== Solution 2 ============
    bool backspaceCompare(string s, string t){
        int i = s.length() - 1;
        int j = t.length() - 1;
        
        int count_s = 0;
        int count_t = 0;
        while(i >= 0 || j >= 0){
            while(i >= 0){
                if(s[i] == '#'){
                    ++count_s;
                    --i;
                }
                else if (count_s > 0){
                    --count_s;
                    --i;
                }
                else{
                    break;
                }
            }
             while(j >= 0){
                if(t[j] == '#'){
                    ++count_t;
                    --j;
                }
                else if (count_t > 0){
                    --count_t;
                    --j;
                }
                else{
                    break;
                }
            }
            if(i >= 0 && j >= 0 && s[i] != t[j]) return false;
            if((i >= 0) != (j >= 0)) return false;
           
           --i; --j;
        }
        return true;
    }
};