class Solution {
public:

  int removeElement(vector<int>& nums, int val) { 
        auto it = nums.begin();
        while(it != nums.end()){
            if(*it == val){
                it = nums.erase(it);
                
            }
            else
                ++it;
                
        }
      return nums.size();
	}
};