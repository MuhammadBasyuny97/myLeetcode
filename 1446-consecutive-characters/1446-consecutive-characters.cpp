class Solution {
public:
    int maxPower(string s) {
       int i=0,j=0,ans=0,ln=s.size();
        while(j<ln){
            while(j<ln && s[j]==s[i])j++;
            ans= max(ans, j-i);
            i=j;
        }
        return ans;
    }
    
};