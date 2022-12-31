class Solution {
public:
    int reverse(int x) {
       int reverse{0};
      // int t_doubles{10};
        int mod{0};
        while( x != 0 ){
            mod = x % 10;
            if(reverse > INT_MAX/10 ||( reverse  == INT_MAX/10 && mod > 7)) return 0;
             if(reverse < INT_MIN/10 ||( reverse  == INT_MIN/10 && mod < -8)) return 0;
               
            reverse = reverse * 10 + mod;
            x /= 10;
        }
        
        return reverse;
    }
};