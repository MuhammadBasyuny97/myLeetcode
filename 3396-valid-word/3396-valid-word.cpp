class Solution {
public:
    bool isValid(string word) {
        //int min_char{0};
        int vowel{0};
        int consonant {0};

        if (word.length() < 3)
            return false;

        for(auto c: word){
            c = toupper(c);
            if(isalnum(c)) {
                if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                    vowel++;
                else if (isdigit(c))
                    continue;
                else 
                    consonant++; 
            }
            else{
                return false;
            }
        }
        return ( (vowel > 0 && consonant > 0) ? true : false);
        
    }
};