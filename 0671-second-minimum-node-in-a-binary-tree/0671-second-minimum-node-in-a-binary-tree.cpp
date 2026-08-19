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
void helper(TreeNode * root, long long  &min1 , long long  &min2 ){
    if(root==NULL){
        return ;
    }
    helper(root->left,min1,min2);

    if(min1>root->val){
         min2 = min1 ;
        min1 = root->val ;
       
    }
    else if(min1!=root->val && min2>root->val){
        min2 = root->val ;
    }

    helper(root->right,min1,min2);
}
    int findSecondMinimumValue(TreeNode* root) {
        long long  min1 = LLONG_MAX;
        long long  min2 = LLONG_MAX;
        helper(root,min1,min2);

     return min2 ;
        
        if(min2==LLONG_MAX){
            return -1 ;
        }
        else{
            return min2 ;
        }
    }
};