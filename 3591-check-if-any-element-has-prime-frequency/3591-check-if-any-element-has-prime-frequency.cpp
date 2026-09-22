class Solution {
public:
    bool ans(int a){
        if(a<2) return false;
        for(int i=2;i<=a/2;i++){
            if(a%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        bool flag = false;;
        for(auto it : mp){
            flag = true;
            if(ans(it.second)==true){
                return true;
            }
        }
        return false;
    }
};