class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int index{0};
       for(int i{0}; i < nums1.size(); ++i){
           for(int j{0}; j < nums2.size() -1 ; ++j){
                if(nums1[i] == nums2[j]){
                   index = j;
                   break;
                }
                 else
                   index = -1;
           }
          
         
           if(index != -1 ){
               int t{index+1};
               while(t < nums2.size()){
                   if(nums2[index] < nums2[t]){
                       index = t;
                       break;
                   }
                   else if(t == nums2.size() -1 )
                       index = -1;
                   ++t;
               }
               
           } 
          if(index == -1)
               ans.push_back(-1);
          else
               ans.push_back(nums2[index]);
       }
        return ans;
    }
}; 

