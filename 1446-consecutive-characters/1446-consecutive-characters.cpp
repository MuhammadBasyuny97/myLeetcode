class Solution {
public:
    int maxPower(string s) {
        int i {0} , j {0};
        int n = s.length();
        char check;
        int power{1};
        
        while (j < n){
            if(s[j] != check){
                 i = j ;
           }else{
                power = max(power,j - i + 1) ; 
                }
            
               check = s[j];
                   ++j;
        }
        return power;
    }
};