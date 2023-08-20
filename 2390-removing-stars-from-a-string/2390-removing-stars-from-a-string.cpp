class Solution {
public:
    string removeStars(string s) {
        stack<char>st1, st2;
        for(int i{0}; i < s.length(); ++i){
            st1.push(s[i]);
        }
        int n {0};
        while(!st1.empty()){
            char elem = st1.top();
            if(n == 0 && elem != '*'){
                st2.push(elem);
                st1.pop();
            }
            else if(elem == '*'){
                n++;
                st1.pop();
            }
            else if(n != 0){
                st1.pop();
                --n;
            }
        }
        string new_str;
        while(!st2.empty()){
            new_str += st2.top();
            st2.pop();
        }
        return new_str;
    }
};