class Solution {
public:
   int minimizedStringLength(string s) {
      //======= Solution 1 ==========
     /*   set<char> set;
        int min_s{0};
        for(int i{0}; i < s.size() ; ++i){
            if(set.find(s[i]) == set.end()){
                set.insert(s[i]);
            }
        }
        return set.size();*/
       
       //======Solution 2=======
       unordered_set<char>st;
       for(auto c: s) st.insert(c);
       return st.size();
    }
};