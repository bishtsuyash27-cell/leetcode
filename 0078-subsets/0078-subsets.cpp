class Solution {
public:
void solve(vector<int>&nums,int i , int n ,vector<vector<int>>&ans,vector<int>&sol){
    if(i==n){
        ans.push_back(sol);
        return ;
    }
    sol.push_back(nums[i]);
    solve(nums,i+1,n,ans,sol);
    sol.pop_back();
    solve(nums,i+1,n,ans,sol);


    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans ;
        vector<int>sol ;
        solve(nums,0,nums.size(),ans,sol);
        return ans ;
    }
};