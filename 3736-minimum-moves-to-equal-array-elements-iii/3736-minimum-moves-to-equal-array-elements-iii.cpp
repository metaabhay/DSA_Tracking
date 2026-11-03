class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(auto it : nums){
            maxi = max(it,maxi);
        }
        int cnt  = 0;
        for(int i=0;i<n;i++){
            cnt += maxi - nums[i];
        }
        return cnt;
    }
};