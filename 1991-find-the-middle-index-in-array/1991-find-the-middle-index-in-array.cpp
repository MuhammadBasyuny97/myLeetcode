class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        size_t nums_length {nums.size()};
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int right_sum {sum - nums[0]} ;
        int left_sum {0};
        
        
        if(right_sum == 0)
            return 0;
        
        for(size_t i {1}; i < nums_length-1; ++i){
            right_sum -= nums[i];
            left_sum += nums[i-1];
            if(right_sum == left_sum)
                return i;
            
        }
        if ( sum - nums[nums_length - 1] == 0)
            return --nums_length;
       
        return -1;
    }
};