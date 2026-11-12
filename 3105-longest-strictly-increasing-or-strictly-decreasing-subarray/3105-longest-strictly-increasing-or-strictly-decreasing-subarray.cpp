class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        int cnt = 1;
        int maxi = cnt;
        while(i < n && j < n){
            if(nums[j]>nums[j-1]){
                cnt = max(cnt,j-i+1);
                maxi = max(maxi,cnt);
                j++;
            }
            else{
                j++;
                i = j-1;
                cnt = 0;
            }
        }
        i = 0;
        j = 1;
        cnt = 1;
        while(i < n && j < n){
            if(nums[j]<nums[j-1]){
                cnt = max(cnt,j-i+1);
                maxi = max(maxi,cnt);
                j++;
            }
            else{
                j++;
                i = j-1;
                cnt = 0;
            }
        }
        return maxi;
    }
};