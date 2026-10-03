class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for(auto it : nums){
            sum1 += it;
        }
        if(sum1-nums[0]==0) return 0;
        int i = 1;
        sum1 = sum1 - nums[0];
        while(i<n){
            sum2 += nums[i-1];
            sum1 = sum1 - nums[i];
            if(sum1==sum2){
                return i;
            }
            i++;
        }
        return -1;
    }
};