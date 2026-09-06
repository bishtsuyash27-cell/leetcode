class Solution {
public:
void solve(vector<int> &candidates,int target,vector<int>&ans,vector<vector<int>>&finalans,int index){
        if(target<0){
            return ;
        }
    
        if(target==0){
            finalans.push_back(ans);
            return ;
        }

        for(int i = index ; i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue ;
            }
           
            ans.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,finalans,i+1);
            ans.pop_back();

        }


}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans ;
        vector<vector<int>>finalans ;
        solve(candidates,target,ans,finalans,0);
        return finalans ;
    }
};