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
int level(TreeNode * root){
    if(root==NULL){
        return 0 ;
    }
    return 1 + max(level(root->left),level(root->right));
}
void levelorder(TreeNode * root,int size , int n ,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    if(size==n){
        ans.push_back(root->val);
        return ;
    }
    if(n%2==0){
    levelorder(root->right,size+1,n,ans);
    levelorder(root->left,size+1,n,ans);
    }
    else{
        levelorder(root->left,size+1,n,ans);
        levelorder(root->right,size+1,n,ans);
    }
 
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans ;
        if(root==NULL){
            return ans ;
        }
       
        int n = level(root);
        for(int i = 1 ; i<=n;i++){
            vector<int>v ;
            levelorder(root,1,i,v);
            ans.push_back(v);

        }
        return ans ;
    }
};