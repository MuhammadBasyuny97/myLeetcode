class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        for(int i{0}; i <= n; ++i){
            s.insert(i);
        }
        for(int i{0}; i < n; ++i){
            auto it = s.find(nums[i]);
            s.erase(it);
        }
        return *(s.begin());
        
    }
};