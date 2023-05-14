class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        set<int> s1;
        set<int> s2;
     /*   for(int i{0}; i < n; ++i){
            for(int j{0}; j < n; ++j ){
                if(s.find(matrix[i][j]) != s.end()){
                    return false;
                }
                s.insert(matrix[i][j]);
            }
        }
       // s = {};
        for(int i{0}; i < n; ++i){
            for(int j{0}; j < n; ++j ){
                if(s2.find(matrix[j][i]) != s2.end()){
                    return false;
                }
                s2.insert(matrix[j][i]);
            }
        }*/
       for(int i{0}; i < n; ++i){
            for(int j{0}; j < n; ++j ){
                s1.insert(matrix[i][j]);
                s2.insert(matrix[j][i]);
                
            }
          if((s1.size() < n || s2.size() < n) ){
              return false;
          }
           s1 = s2 = {};
       }
      return true;
        
    }
};