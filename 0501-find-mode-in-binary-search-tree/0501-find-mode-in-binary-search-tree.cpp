/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode * root,vector<int>&ans, int &prev ,int &maxcount,int&count){
    if(root==NULL){
        return ;
    }
    solve(root->left,ans,prev,maxcount,count);

    if(prev==root->val){
        count++;
    }
    else{
        count = 0 ;
    }
    prev = root->val ;

    if(count==maxcount){
        ans.push_back(root->val);
    }
    if(count>maxcount){
        ans.clear();
        maxcount = count ;
        ans.push_back(root->val);
    }
    solve(root->right,ans,prev,maxcount,count);
}
    vector<int> findMode(TreeNode* root) {
        int prev = INT_MIN ;
        int maxcount = 0 ;
        int count = 0 ;
        vector<int>ans;

        solve(root,ans,prev,maxcount,count);

        return ans ;

    }
};