class Solution {
public:
    void dfs(vector<vector<int>>& adjl,vector<bool>& vis,int node){
        vis[node] = true;
        for(auto it : adjl[node]){
            if(!vis[it]){
                dfs(adjl,vis,it);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjl(n+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                adjl[i+1].push_back(j+1);
                //adjl[j+1].push_back(i+1);
                }
            }
        }

        vector<bool> vis(n+1,false);
        vis[0] = true;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                cnt++;
                dfs(adjl,vis,i);
            }
        }
        return cnt;
    }
};