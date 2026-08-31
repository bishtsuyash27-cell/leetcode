class Solution {
public:
void solve(vector<int>&nums,int i , int n , vector<int>&ans , vector<vector<int>>&finalans){
    if(i==n){
        finalans.push_back(ans);
        return ;
    }
    ans.push_back(nums[i]);
    solve(nums,i+1,n,ans,finalans);
    ans.pop_back();

    int idx = i+1 ;
    while(idx<n && nums[idx]==nums[idx-1]){
        idx++ ;
    }
    solve(nums,idx,n,ans,finalans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans ;  
        vector<vector<int>>finalans ;
        
        solve(nums,0,nums.size(),ans,finalans);
        return finalans;
    }
};