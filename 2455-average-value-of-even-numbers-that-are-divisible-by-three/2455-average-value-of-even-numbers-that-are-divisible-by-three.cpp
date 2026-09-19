class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int cnt =0;
        for(auto it : nums){
            if(it%6==0){
                sum += it;
                cnt++;
            }
        }
        if(sum > 0) return sum/cnt;
        return 0;
    }
};