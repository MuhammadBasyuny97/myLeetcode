class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      /* vector<int>ans (2*n);
        for(int i {0}; i < 2* n && i <; i + 2){
            ans[i] = nums[i];
            ans[i+1] = nums[n+i];
        }*/
        vector <int> ans;
        for(int i {0}; i < n; ++i){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        
        return ans;
    }
};