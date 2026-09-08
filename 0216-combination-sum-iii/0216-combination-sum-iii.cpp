class Solution {
public:
void solve(int k , int n ,vector<int>&ans,vector<vector<int>>&finalans,int index ){
    if(k==0 && n==0){
        finalans.push_back(ans);
        return ;
    }

    if(k==0 || n==0 || index>9){
        return ;
    }


    for(int i = index;i<10;i++){
    ans.push_back(i);
    solve(k-1,n-i,ans,finalans,i+1);
    ans.pop_back();
   
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        vector<vector<int>>finalans ;
        solve(k,n,ans,finalans,1);
        return finalans ;

    }
};