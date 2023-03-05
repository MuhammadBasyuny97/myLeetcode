class Solution {
public:
    bool checkIfPangram(string sentence) {
     unordered_set<char> alphabet_set;
      for(auto c : sentence ){
        if(isalpha(c))
        {
          alphabet_set.insert(tolower(c));
        }
      }

      return alphabet_set.size() == 26;
    }
};