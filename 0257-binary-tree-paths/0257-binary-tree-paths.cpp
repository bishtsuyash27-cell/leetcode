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
void helper(TreeNode * root ,string ans , vector<string>& st){
if(root==NULL){
    return ;
}
string str  = to_string(root->val);
if(root->left==NULL && root->right==NULL){
    ans+=str ;
    st.push_back(ans);
    return ;
}
    helper(root->left,ans+str+"->",st);
    helper(root->right,ans+str+"->",st);



}
    vector<string> binaryTreePaths(TreeNode* root) {
        string ans="";
        vector<string>st ;
        helper(root,ans,st);
        return st ;

    }
};