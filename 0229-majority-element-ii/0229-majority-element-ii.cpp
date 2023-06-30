class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> m;
        int n = nums.size();
        for(auto elem : nums){
            m[elem]++;
        }
        vector<int> majority ;
        for(const auto &elem : m ){
            if(elem.second > n / 3) majority.push_back(elem.first);
        
        }
        return majority;
    }
};