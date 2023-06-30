class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int , int> m;
        int n = nums.size();
        for(auto elem : nums){
            m[elem]++;
        }
        int majority {0};
        for(const auto &elem : m ){
            if(elem.second > n / 2) majority = elem.first;
        
        }
        return majority;
    }
};