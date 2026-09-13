class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        int a = grid.size();
        int b = grid[0].size();
        vector<vector<int>> ans(a,vector<int>(b,0));
        int k = 0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                int x = (j - rowShift[k]+n)%n;
                ans[i][x] = grid[i][j];
            }
            k++;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                grid[i][j] = ans[n-1-j][i];
            }
        }

        k = 0;
        for(int i=0;i<a;i++){
            for(int j=b-1;j>=0;j--){
                int x = (n-j-1 - colShift[k]+n)%n;
                ans[i][x] = grid[i][j];
            }
            k++;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                grid[i][j] = ans[j][i];
            }
        }

        return grid;
    }
};