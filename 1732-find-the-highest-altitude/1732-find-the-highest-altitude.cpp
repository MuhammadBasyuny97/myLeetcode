class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> attitudes(n + 1);
        attitudes[0] = 0;
        for(int i {0}; i < n; ++i){
            attitudes[i+1] = gain[i] + attitudes[i];
        }
        int max = INT_MIN; 
        for(int i{0}; i < attitudes.size(); ++i){
            if(max < attitudes[i]) max = attitudes[i];
        }
        // return max_element(attitudes.begin(), attitudes.end());
        return max;
    }
};