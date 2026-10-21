class Solution {
public:
    void dfs(vector<vector<int>>& ans,vector<vector<int>>& image,int rows[],int cols[],int a,int color,int sr,int sc){
        ans[sr][sc] = color;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow = sr + rows[i];
            int ncols = sc + cols[i];
            if(nrow>=0 && nrow<n && ncols>=0 && ncols<m && image[nrow][ncols]==a && ans[nrow][ncols] != color){
                dfs(ans,image,rows,cols,a,color,nrow,ncols);
            }
        }
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int a = image[sr][sc];
        vector<vector<int>> ans = image;
        int rows[] = {1,0,-1,0};
        int cols[] = {0,1,0,-1};
        dfs(ans,image,rows,cols,a,color,sr,sc);
        return ans;

    }
};