class Solution {
public:


void solve(vector<int>candidates,int target,vector<int>&ans ,vector<vector<int>>&finalans,int index,set<vector<int>>&st){
    if(index==candidates.size() || target<0){
        return ;
    }
    if (target == 0) {
    if (st.find(ans) == st.end()) {
        st.insert(ans);
    finalans.push_back(ans); 

    } 
    return; 
}
        
    
    ans.push_back(candidates[index]);
    solve(candidates,target-candidates[index],ans,finalans,index,st);
    solve(candidates,target-candidates[index],ans,finalans,index+1,st);
    ans.pop_back();
    solve(candidates,target,ans,finalans,index+1,st);


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans ;
        vector<vector<int>>finalans ;
      set<vector<int>>st ;
        solve(candidates,target,ans,finalans,0,st);
        return finalans ;

    }
};