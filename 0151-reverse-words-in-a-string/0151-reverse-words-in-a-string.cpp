class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        stack<string> words;
        string word = "";
        int i = 0;
        while(i < n){
            if( isalnum(s[i]) ) word += s[i];
            else if(( isspace(s[i]) && word.length() > 0 )){
                words.push(word);
                word = "";
                
            } 
            ++i;
        }
        
        if(word.size() != 0) words.push(word);
        string result = "";
        while(!words.empty()){
            result += words.top();
            result += " ";
            words.pop();
        }
        result.pop_back();  // trim the last space
        return result;
            
    }
};