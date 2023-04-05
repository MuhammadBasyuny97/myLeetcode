class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue <pair<int,int>> pq;
        vector<int> res;
        
        for(auto num:nums){
            m[num]++;
        }
        for(auto elem: m){
            pq.push({elem.second,elem.first});
        }
        while(k > 0){
            res.push_back(pq.top().second);
            pq.pop();
            --k;
        }
        return res;
    }
};