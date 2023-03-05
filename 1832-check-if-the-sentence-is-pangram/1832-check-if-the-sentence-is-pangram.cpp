class Solution {
public:
    bool checkIfPangram(string sentence) {
     unordered_set<char> alphabet_set;
      for(auto c : sentence ){
        if(isalpha(c))
        {
          alphabet_set.insert(tolower(c));
        }
          //avoid looping through the entire sentence if the sentence became pangram 
          if(alphabet_set.size() == 26)
              return true;
      }

      return false ;
    }
};