class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        size_t s{digits.size()};
        
            ++digits[s-1];
        
      
            while(digits[s - 1] > 9 && s > 1){
                digits[s - 1] = 0;
                ++digits[s - 1 - 1];
                --s;
                }
              if (digits[0] > 9 ){    
                    digits[0] = 1;
                    digits.push_back(0);
            }
    
        return digits;
    }
};