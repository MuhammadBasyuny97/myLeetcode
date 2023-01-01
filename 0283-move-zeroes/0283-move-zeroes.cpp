class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j{0};
        int first_zero;
        while(j < nums.size()){
            if(nums[j] == 0){
                first_zero = j;
                break;
            }
         ++j;
        }
        for(int i{first_zero} ; i < nums.size() ; ++i){
           if(nums[i] != 0 && i > first_zero){
               swap(nums[i] , nums[first_zero]);
               j = first_zero + 1;
             while(j < nums.size()){
               if(nums[j] == 0){
                first_zero = j;
                break;
                 }
                 else
                     i =j + 1;
                 
                  ++j;
                  }
              }
           else if(nums[i] == 0 && i <= first_zero)
               first_zero = i;      
     }
    }
};