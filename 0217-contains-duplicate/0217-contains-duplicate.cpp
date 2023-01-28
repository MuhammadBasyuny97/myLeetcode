class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        for(size_t i {nums.size() -1}; i > 0 ; --i){
            if(nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};