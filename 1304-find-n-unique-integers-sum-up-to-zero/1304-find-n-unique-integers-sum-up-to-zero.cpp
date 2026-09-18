class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int m = -(n-1);
        for(int i=0;i<n;i++){
                ans.push_back(m);
                m += 2;
        }
        return ans;
    }
};