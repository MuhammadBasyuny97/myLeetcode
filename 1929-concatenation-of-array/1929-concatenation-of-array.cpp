class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {   
        size_t n {nums.size()};
        nums.reserve(n+n);
        nums.insert(nums.end(), nums.begin(), nums.end());
        
        return nums;
    }
};