class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Approach - 1
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        // Define min heap
        priority_queue<P,vector<P>,greater<P>> pq;

        // push elements in min heap
        // maintains size of k only

        for(auto it : mp){
            int value = it.first;
            int freq = it.second;

            pq.push({freq,value});

            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int> result;

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;

    }
};