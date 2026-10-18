class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> ans(n+2,0);
        for(auto it : edges){
            ans[it[0]]++;
            ans[it[1]]++;
        }
        int a = 0;
        int maxi = INT_MIN;
        for(int i=0;i<n+2;i++){
            if(maxi < ans[i]){
                maxi = max(maxi,ans[i]);
                a = i;

            }
        }
        return a;
    }
};