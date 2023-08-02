class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(const auto &elem: arr){
            m[elem]++;
        }
        unordered_set<int>s;
        for(const auto & elem: m){
          if(!s.count(elem.second)) s.insert(elem.second);
          else{
              return false;
          }  
        }
        return true;
    }
};