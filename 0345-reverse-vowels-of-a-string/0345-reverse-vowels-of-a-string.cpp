class Solution {
public:
    string reverseVowels(string s) {
        int i {0};
        int j = s.length() - 1;
        unordered_set <char> vowels {'A','a','e','E','i','I','o','O','u','U'};
        while(j > i){
            
            
             if(vowels.find(s[i]) != vowels.end() && vowels.find(s[j]) != vowels.end()){
                    swap(s[i],s[j]);
                    ++i;
                    --j; 
             }
             else if(vowels.find(s[j]) == vowels.end())--j;
             else if (vowels.find(s[i]) == vowels.end() ) ++i;
                  
        }
        return s;
    }
};