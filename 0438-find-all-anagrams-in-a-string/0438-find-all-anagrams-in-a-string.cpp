class Solution {
public:
    bool allstring(unordered_map<char,int> &mp){
        for(auto &it : mp){
            if(it.second != 0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        bool flag = true;
        unordered_map<char,int> mpp;
        for(int i=0;i<m;i++){
            mpp[p[i]]++;
        }
        int i = 0;
        int j = 0;
        vector<int> result;
        while(j<n){
            mpp[s[j]]--;
            if(j-i+1==m){
                if(allstring(mpp)==true){
                    result.push_back(i);
                }
                mpp[s[i]]++;
                i++;
            }
            j++;
        }
        return result;
    }
};