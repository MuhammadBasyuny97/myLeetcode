class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size()) return false;
       if(s == t) return true;
        
        unordered_map<char , int> umap ;
      
        for(int i{0}; i < s.size(); ++i){
            umap[s[i]]++;
            umap[t[i]]--;
        }
        for(auto c: umap){
            if(c.second) return false;
        }
        return true;
    }
};