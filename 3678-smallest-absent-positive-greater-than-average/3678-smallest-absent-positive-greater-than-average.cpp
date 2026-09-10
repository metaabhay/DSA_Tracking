class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        int sum  = 0;
        for(auto it : nums){
            sum += it;
        }
        int ans = 0;
        double ave = sum/n;
        if(ave < 0) ave = 0;
        unordered_set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        int x = int(ave);
        for(int i=0;i<s.size();i++){
            x = x + 1;
            if((s.find(x) == s.end()) && x > ave){
                return x;
            }
        }
        return 0;
    }
};