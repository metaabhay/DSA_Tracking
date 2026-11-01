class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        //sort(nums.begin(),nums.end());
        //if(nums[0]>=n) return n;
        for(int i=1;i<=n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[j]>=i){
                    cnt++;
                }
                if(cnt > i) break;
            }
            if(cnt==i) return cnt;
        }
        return -1;
    }
};