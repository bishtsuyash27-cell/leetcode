class Solution {
public:
int solve(int i , int m , int j , int n,vector<vector<int>>&dp){
   
    if(i>m || j>n){
        return 0 ;
    }

    if(i==m && j==n){
        return 1 ;
    }
     if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j] =  solve(i+1,m,j,n,dp) + solve(i,m,j+1,n,dp);
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(0,m-1,0,n-1,dp);
    }
};