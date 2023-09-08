class Solution {
public:
    int calc(int n, int m, int row, int col, vector<vector<char>>& matrix,vector<vector<int>> &dp){

        if(row >= n or col >= m) return 0;
        if(matrix[row][col] == '0') return 0;
        if(dp[row][col] != -1) return dp[row][col];

        int right = calc(n, m, row, col+1, matrix, dp);
        int down = calc(n, m, row+1, col, matrix, dp);
        int diag = calc(n, m, row+1, col+1, matrix, dp);

        return dp[row][col] = min({right, down, diag}) + 1;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n,vector<int>(m,-1));
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res = max(res, calc(n, m, i,j, matrix, dp));
            }
        }

        return res*res;
    }
};