class Solution {
public:
int solve(vector<int>&nums,vector<int>&dp,int i){
    if(i==nums.size())return 0 ;
    if(i==nums.size()-1) return nums[i];
    if(i==nums.size()-2) return max(nums[i],nums[i+1]);

    if(dp[i]!=-1) return dp[i];



    return dp[i] =  max( (nums[i] + solve(nums,dp,i+2 )) ,( 0 + solve(nums,dp,i+1)) );
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);

        return solve(nums,dp,0);
    }
};