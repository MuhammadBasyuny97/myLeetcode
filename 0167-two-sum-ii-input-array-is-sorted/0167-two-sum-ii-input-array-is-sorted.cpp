class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        size_t nums_length {numbers.size()}; 
        size_t i {0}, j {nums_length - 1};
        while( j > i ){
              if(numbers[i] + numbers[j] == target){
                  indices.push_back(++i);
                  indices.push_back(++j);
                  break;
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