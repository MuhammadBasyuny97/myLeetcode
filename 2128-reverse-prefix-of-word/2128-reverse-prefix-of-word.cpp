class Solution {
public:
    string reversePrefix(string word, char ch) {
       // if(find(word.begin(),word.end(), ch) == word.end())  return word;
       size_t right = word.find(ch);

       if(right == string::npos || word.size() == 1 || right == 0)
          return word;
       
       size_t left {0};
       char temp{word[0]};
       while(right >= left ){
        temp = word.at(right);
        word.at(right) = word.at(left); 
        word.at(left) = temp;
        ++left; 
        --right;
       }
       return word;
        
    }
};