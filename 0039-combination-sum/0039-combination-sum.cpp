class Solution {
public:
void solve(vector<int>&candidates,int target,vector<int>&ans,vector<vector<int>>&finalans,int index){
    if(index==candidates.size() || target<0){
        return ;
    }
    if(target==0){
        finalans.push_back(ans);
        return ;
    }
    ans.push_back(candidates[index]);
    solve(candidates,target-candidates[index],ans,finalans,index);
    ans.pop_back();
    solve(candidates,target,ans,finalans,index+1);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>finalans ;
        solve(candidates,target,ans,finalans,0);
        return finalans ;
    }
};