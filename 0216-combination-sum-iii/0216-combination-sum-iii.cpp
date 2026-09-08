class Solution {
public:
void solve(int k , int n , vector<int>&ans , vector<vector<int>>&finalans,int index){
    if(k==0 && n==0){
        finalans.push_back(ans);
        return ;
    }
    if(k==0 || n<0 || index>9){
        return ;
    }
    ans.push_back(index);
    solve(k-1,n-index,ans,finalans,index+1);
    ans.pop_back();

    solve(k,n,ans,finalans,index+1);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans ;
        vector<vector<int>>finalans ;
        solve(k,n,ans,finalans,1);
        return finalans ;

    }
};