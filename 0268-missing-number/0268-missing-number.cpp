class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int rsum = 0;
        int x = 1;
        for(int i{0}; i < n; ++i){
            rsum += nums[i];
            sum += x;
            ++x;
        }
       
        return sum - rsum;
        
    }
};