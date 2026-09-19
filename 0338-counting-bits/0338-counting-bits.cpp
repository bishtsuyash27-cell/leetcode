class Solution {
public:
int countbits(int x,vector<int>&dp ){
    if(x==0){
        return 0 ;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    return dp[x] = countbits(x/2,dp) + (x%2);
}
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        vector<int>dp(n+1,-1);
        for(int i = 0 ; i<=n ;i++){
            ans[i] = countbits(i,dp);
        }
        return ans ;
    }
};