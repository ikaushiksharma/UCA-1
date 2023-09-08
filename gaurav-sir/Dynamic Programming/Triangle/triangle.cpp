class Solution {
public:
    int calc(int n, int row, int col,vector<vector<int>>& triangle, int sum, vector<vector<int>> &dp){
        if(row >= n){
            return 0;
        }

        if(dp[row][col] != -1){
            return dp[row][col];
        }


        int one = calc(n, row+1, col, triangle, sum, dp);
        int two = calc(n, row+1, col+1, triangle, sum, dp);
        return dp[row][col] = triangle[row][col] + min(one, two);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return calc(n, 0, 0, triangle, 0, dp);
    }
};