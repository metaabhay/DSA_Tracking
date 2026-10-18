class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            int xo = nums[i]^nums[i+1];
            if(xo == 0) cnt++;
        }
        return cnt;
    }
};