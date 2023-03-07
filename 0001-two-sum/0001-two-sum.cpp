class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        size_t nums_length {nums.size()}; 
        for(size_t i{0} ; i < nums_length -1 ; ++i){
            for(size_t j{i+1} ; j < nums_length  ; ++j){
                if(nums[i] + nums[j] == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
};