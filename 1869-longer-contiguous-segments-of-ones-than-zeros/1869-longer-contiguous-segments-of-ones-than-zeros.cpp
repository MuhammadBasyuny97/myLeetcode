class Solution {
public:
  
      
// Now, the generic two pointers solution. It can be used if we have more than 2 unique characters.
//  C++

bool checkZeroOnes(string s) {
    int m_cnt[2] = {};
    for (int i = 0, j = 0; i < s.size(); j = i)
        while(i < s.size() && s[i] == s[j])
            m_cnt[s[j] - '0'] = max(m_cnt[s[j] - '0'], ++i - j);
    
    return m_cnt[1] > m_cnt[0];
}
    
};