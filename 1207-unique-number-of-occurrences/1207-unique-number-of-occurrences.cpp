class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(const auto &elem: arr){
            m[elem]++;
        }
        vector<int> vec;
        for(const auto & elem: m){
            vec.push_back(elem.second);
        }
        sort(vec.begin(), vec.end());
        for(int i{0}; i < vec.size() - 1; ++i){
            if(vec[i] == vec[i+1]) return false;
        }
        return true;
    }
};