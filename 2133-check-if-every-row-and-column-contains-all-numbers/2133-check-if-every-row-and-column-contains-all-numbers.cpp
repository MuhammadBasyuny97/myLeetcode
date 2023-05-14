class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        set<int> row,col;
        
       for(int i{0}; i < n; ++i){
            for(int j{0}; j < n; ++j ){
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
                
            }
          if((row.size() < n || col.size() < n) ){
              return false;
          }
           row = col= {};
       }
      return true;
        
    }
};