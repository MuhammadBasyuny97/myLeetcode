class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        int duplicate {0};
        for(int i{0}; i < nums.size(); ++i){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
          }else{
                duplicate = nums[i];
                break;
            }
        }
      
       return duplicate; 
    }
};