class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Approach - 1
        // unordered_map<int,int> mp;
        // for(auto it : nums){
        //     mp[it]++;
        // }
        // // Define min heap
        // priority_queue<P,vector<P>,greater<P>> pq;

        // // push elements in min heap
        // // maintains size of k only

        // for(auto it : mp){
        //     int value = it.first;
        //     int freq = it.second;

        //     pq.push({freq,value});

        //     if(pq.size() > k){
        //         pq.pop();
        //     }
        // }

        // vector<int> result;

        // while(!pq.empty()){
        //     result.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return result;

        // Approach -2
        // 1. Map mein frequency store kiya 
        // 2. Ek vector<vector<int>> a;
        // a[i] = elements having i frequency
        // 3. now find results from a array

        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        vector<vector<int>> a(n+1);
        for(auto it : mp){
            a[it.second].push_back(it.first);
        }
        vector<int> result;

        for(int i=n;i>=0;i--){
            if(a[i].size()==0) continue;
            while(a[i].size() > 0 && k > 0){
                result.push_back(a[i].back());
                a[i].pop_back();
                k--;
            }
        }
        return result;
           


    }
};