class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        priority_queue<int> pq;
        int i = 0;
        while(i<n){
            pq.push(gifts[i]);
            i++;
        }
        while(k > 0){
            long long a = pq.top();
            a = sqrt(pq.top());
            pq.pop();
            pq.push(a);
            k--;
        }
        long long sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};