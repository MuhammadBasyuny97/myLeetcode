class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        size_t nums_length {nums.size()}; 
        int right_sum = accumulate(nums.begin(), nums.end(), 0) ;
        int left_sum {0};
        
        int ans {-1};
        
        
        for(size_t i {0}; i < nums_length; ++i){
            right_sum -= nums[i];
            
            if(right_sum == left_sum){
                ans = i;
                break;
            }
                
            left_sum += nums[i];  
        }
        
       
        return ans;
    }
};