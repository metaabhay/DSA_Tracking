class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        int i = 0;
        while(i<n){
            pq.push(piles[i]);
            i++;
        }
        while(k > 0){
            long long a = pq.top();
            a = pq.top() - pq.top()/2;
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