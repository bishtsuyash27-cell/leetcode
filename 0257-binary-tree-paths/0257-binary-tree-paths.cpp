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
   void helper(TreeNode * root,string  & ans ,vector<string>&s){
 if(root->left==NULL && root->right==NULL){
            int len = ans.length();
            ans = ans+to_string(root->val); 
            s.push_back(ans);
            
        ans.resize(len);
            return ;
        }
        
        int len = ans.length();
        ans = ans+to_string(root->val)+"->";
        if(root->left!=NULL){
        helper(root->left,ans,s);
        }
        if(root->right!=NULL){ 
        helper(root->right,ans,s);
        }
        ans.resize(len);
        
        
}
    vector<string> binaryTreePaths(TreeNode* root) {
        string ans ="";
        vector<string>s ;
        helper(root,ans,s);
        return s ;


        
    }
};