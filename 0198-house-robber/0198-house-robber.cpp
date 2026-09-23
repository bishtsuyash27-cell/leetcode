class Solution {
public:
int solve(vector<int>&nums,int i,vector<int>&dp){
    if(i==0){
        return nums[0];
    }
    if(i==1){
        return max(nums[i],nums[i-1]);
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i] =  max( (nums[i] + solve(nums,i-2,dp) ), 0 + solve(nums,i-1,dp) );
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,nums.size()-1,dp);
    }
};