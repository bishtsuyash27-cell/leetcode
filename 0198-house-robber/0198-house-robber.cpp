class Solution {
public:
int f(vector<int>&nums , int i ,vector<int>&dp){
    if(i==nums.size()-1){
        return nums[i];

    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(i==nums.size()-2){
        return max(nums[i],nums[i+1]);
    }
    return dp[i] =  max( (nums[i] + f(nums,i+2,dp) ) ,(0 + f(nums,i+1,dp) ) );
  
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1 , -1);
            return f(nums,0,dp);

    }
};