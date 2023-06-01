class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> squares (nums.size(),0);
        int n = nums.size();
        int i {0}, j{n-1};
        int k {n - 1};
        
  
            while(i < n && j >= i){
                int square_i = nums[i] * nums[i];
                int square_j = nums[j] * nums[j];
                if(square_j >= square_i ){
                    squares[k--] = square_j;
                    --j;
               }else {
                    squares[k--] = square_i;
                    ++i;
               }                 
            }
       
            
        return squares;
    }
};