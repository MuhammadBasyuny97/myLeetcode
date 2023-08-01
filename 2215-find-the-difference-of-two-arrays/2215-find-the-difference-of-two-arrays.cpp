class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1 {nums1.begin(), nums1.end()};
        set<int>s2 {nums2.begin(), nums2.end()};
        vector<vector<int>> answer(2);
        vector<int>vec;
        for(auto &elem : nums1){
            if(s2.find(elem) == s2.end() && find(vec.begin(), vec.end(), elem) == vec.end()){
                vec.push_back(elem);
            }
        }
        answer[0] = vec;
        vec = {};
        for(auto &elem : nums2){
            if(s1.find(elem) == s1.end() && find(vec.begin(), vec.end(), elem) == vec.end()){
                vec.push_back(elem);
            }
        }
        answer[1]= vec;
        
        return answer;
    }
};