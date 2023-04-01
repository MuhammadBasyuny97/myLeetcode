class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> vec;
       for(auto num : nums){
           m[num]++;
       }
        int max = 1;
        int key = 0;
      while(k > 0){
          for(auto elem : m){
              if(max <= elem.second){
                  max = elem.second;
                  key = elem.first;
                }
            }
                  
              auto it = m.find(key);
              m.erase(it);
              vec.push_back(key);
              max = 1;
              --k;
        } 
             
      
      
        return vec;
    }
};