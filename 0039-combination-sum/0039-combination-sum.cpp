class Solution {
public:
void solve(vector<int>&candidates,int target,vector<int>&ans,vector<vector<int>> & finalans,int index){
    if(index==candidates.size()||target<0){
        return ;
    }
    if(target==0){
        finalans.push_back(ans);
        return ;
    }
    for(int i = index; i<candidates.size();i++){
        ans.push_back(candidates[i]);
        solve(candidates,target-candidates[i],ans,finalans,i);
        ans.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans ;
        vector<vector<int>>finalans ;
        solve(candidates,target,ans,finalans,0);
        return finalans ;
    }
};