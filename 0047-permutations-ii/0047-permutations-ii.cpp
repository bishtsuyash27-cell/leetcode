class Solution {
public:
void solve(vector<int>&nums , int index , vector<vector<int>>&ans){
    if(nums.size()==index){
        ans.push_back(nums);
        return ;
    }
    unordered_set<int>st ;
    for(int i = index ; i<nums.size();i++){
        if(st.count(nums[i])){
            continue ;
        }
        st.insert(nums[i]);
        swap(nums[i],nums[index]);
        solve(nums,index+1,ans);
        swap(nums[i],nums[index]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>> ans ;
       solve(nums,0,ans);
        return ans ;
    }
};