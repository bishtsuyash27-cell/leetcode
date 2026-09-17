class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+2,0);
    int n = cost.size();
        dp[n+1] = 0 ;
        dp[n] = 0 ;

        for(int i = n-1 ; i>=0 ; i--){
            dp[i] = cost[i] + min(dp[i+1],dp[i+2]);
        }

        return min(dp[0],dp[1]);

    }
};