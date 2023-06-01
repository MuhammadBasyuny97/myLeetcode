class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            vector<int> indices;
           size_t nums_length {numbers.size()}; 
           int i {0};
           int j = nums_length - 1; 
        while( j > i ){
              if(numbers[i] + numbers[j] == target){
                  return {i+1, j +1};
                }
              else if (numbers[i] + numbers[j] > target){
                  --j;
             }
             else {
                ++i;
             }
        } 
          return indices;
    }
};

 
    
    
    
