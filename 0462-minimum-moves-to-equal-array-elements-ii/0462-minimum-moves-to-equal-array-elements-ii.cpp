class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a;
        int sum = 0;
        if(n%2==0){
            a = nums[(n/2) - 1];
        }
        else {
            a = (nums[n/2] + nums[(n/2)])/2;
        }
        for(int i=0;i<n;i++){
            sum += abs(a - nums[i]);
        }
        return sum;
    }
};