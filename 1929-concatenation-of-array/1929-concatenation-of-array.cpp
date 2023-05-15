class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {   
        size_t n {nums.size()};
        vector<int> ans(2*n);
        
        for(size_t i {0}; i < n; ++i ){
            ans[i] = ans[i + n] = nums[i];
        }
        return ans;
    }
};