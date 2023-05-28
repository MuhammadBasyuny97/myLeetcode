class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max {0};
        int count{0};
        for(size_t i{0}; i < nums.size(); ++i){
            if(nums[i] != 0){
                count++;
            }
            else{
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
        return count > max ? count : max;
    }
};