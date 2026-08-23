class Solution {
public:
int solve(int i , int j , vector<vector<int>> & obstacleGrid,int n , int m,vector<vector<long long >>&dp){
    if(i>n || j>m){
        return 0 ;
    }

     if(obstacleGrid[i][j]==1){
        return 0 ;
    }
    if(i==n && j==m){
        return 1 ;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    return dp[i][j] = solve(i+1,j,obstacleGrid,n,m,dp) + solve(i,j+1,obstacleGrid,n,m,dp);

   
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<long long>>dp(n,vector<long long>(m,-1));
    
        return solve(0,0,obstacleGrid, n-1 , m-1,dp);

    }
};