class Solution {
public:
    bool checkIfPangram(string sentence) {
     unordered_set<char> alphabet_set;
      for(auto c : sentence ){
        if(isalpha(c))
        {
          c = tolower(c);
          alphabet_set.insert(c);
        }
      }

      
      // TODO: Write your code here
      return (alphabet_set.size() == 26) ? true : false;
    }
};