class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 2) return 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int cnt = 0;
        int i = 0;
        while(i<n){
            pq.push(nums[i]);
            i++;
        }
        if(pq.top()>=k) return cnt;
        while(true){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long sum = ((min(a,b)*2) + max(a,b));
            pq.push(sum);
            cnt++;
            if(pq.top()>=k){
                return cnt;
            }
        }
        return cnt;
    }
};