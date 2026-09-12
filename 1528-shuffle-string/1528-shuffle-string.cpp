class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans = "";
        map<int,char> mp;
        for(int i=0;i<n;i++){
            mp[indices[i]] = s[i];
        }
        for(auto it : mp){
            ans += it.second;
        }
        return ans;

    }
};