class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int> m;
          //vector<int> indices;
        for(int i {0}; i < nums.size(); ++i){
            int diff = target - nums[i];
            if(m.find(diff) != m.end()){
              //  indices.push_back(m[diff]);
               // indices.push_back(i);
               // break;
                return {m[diff] , i};
            }
           else{
               m[nums[i]] = i;
               //m.insert(make_pair(nums[i] , i));
           } 
        }
          return {};     
        }
        
    
};