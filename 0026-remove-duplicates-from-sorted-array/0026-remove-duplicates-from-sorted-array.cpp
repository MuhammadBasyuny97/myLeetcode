class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i{0}, j{1},k{1};
        int n = nums.size();
        while (j < n){
            if(nums[i] != nums[j]){
                swap(nums[i+1] , nums[j]);
                ++i;
                ++k;
            }
            ++j;
                
        }
        return k;
    }
};