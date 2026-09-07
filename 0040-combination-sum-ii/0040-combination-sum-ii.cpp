class Solution {
public:
void solve(vector<int>&candidates,int target,vector<int>&ans,vector<vector<int>>&finalans,int index ){
    if(target==0){
        finalans.push_back(ans);
        return ;
    }
    if(target<0 || index==candidates.size()){
        return ;
    }
    ans.push_back(candidates[index]);
    solve(candidates,target-candidates[index],ans,finalans,index+1);
    ans.pop_back();

    int j = index+1 ;
    while(j<candidates.size() && candidates[j]==candidates[j-1]){
        j++;
    }
    solve(candidates,target,ans,finalans,j);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans ;
        vector<vector<int>>finalans ;
        solve(candidates,target,ans,finalans,0);
        return finalans ;
        
    }
};