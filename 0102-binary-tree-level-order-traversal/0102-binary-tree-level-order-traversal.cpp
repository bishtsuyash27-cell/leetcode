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
int levels(TreeNode * root){
    if(root==NULL){
        return 0 ;
    }
    return 1 + max(levels(root->left),levels(root->right));
}
void traversal(TreeNode * root,int size , int n , vector<int>&ans){
    if(root==NULL){
        return ;
    }
    if(size==n){
        ans.push_back(root->val);
    }
    traversal(root->left,size+1,n,ans);
    traversal(root->right,size+1,n,ans);

}
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>>ans ;
    
        for(int i = 1 ; i<=n ; i++){
            vector<int>v ;
            traversal(root,1,i,v);
            ans.push_back(v);
            
        }
        return ans ;

    }
};