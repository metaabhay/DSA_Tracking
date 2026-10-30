class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n = nums.size();
        double sum = 0;
        int cnt = 0;
        for(auto it : nums){
            sum += it;
        }
        priority_queue<double> pq;
        int i = 0;
        while(i < n){
            pq.push(nums[i]);
            i++;
        }
        double ans = sum;
        while(ans > sum/2){
            double a = pq.top();
            pq.pop();
            a = a/2;
            pq.push(a);
            cnt++;
            ans = ans - a;
        }
        return cnt;

    }
};