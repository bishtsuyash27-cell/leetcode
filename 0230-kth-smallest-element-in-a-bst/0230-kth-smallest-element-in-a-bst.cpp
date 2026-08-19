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

void helper(TreeNode * root , int &k ,int &ans ,int &curr ){
    if(root==NULL){
        return ; 
    }

    helper(root->left, k ,ans,curr);

    curr++;
    if(curr==k){
        ans = root->val;
        
    }
    
    
    helper(root->right,k,ans,curr);
}
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0 ;
        int curr = 0 ;
        helper(root,k,ans,curr);
        return ans ;
    }
};