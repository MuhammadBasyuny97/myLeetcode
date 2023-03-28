class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> m;
        vector<vector<string>> groups;
        for(auto str: strs){
            string str_copy = str;
            sort(str_copy.begin(), str_copy.end());
            if(m.find(str_copy) != m.end()){
                m[str_copy].push_back(str);
           }
            else{
                m[str_copy] = {str};
            }
        }
        for(auto key : m){
            groups.push_back(key.second);
        }
        
        return groups;
         
        //traverse through the vector strs
        //sort the str 
        //insert into mapping
        
        
    
    }
};