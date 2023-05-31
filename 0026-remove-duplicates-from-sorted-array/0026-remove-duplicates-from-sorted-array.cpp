class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j{1},k{1};
        int n = nums.size();
        while (j < n){
            if(nums[k-1] != nums[j]){
                nums[k++] = nums[j];
                //insert index
            }
            ++j;    
        }
        return k;
    }
};