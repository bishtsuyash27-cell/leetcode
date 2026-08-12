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
TreeNode * solve(vector<int>&preorder,vector<int>&inorder , int & preindex ,int start, int end){
    if(start>end){
        return NULL ;
    }
    TreeNode * root = new TreeNode(preorder[preindex]);
    preindex++;
    int mid = start ;

    while(root->val!=inorder[mid]){
        mid++;

    }

    root->left = solve(preorder,inorder,preindex,start,mid-1);
    root->right = solve(preorder,inorder,preindex,mid+1,end);

    return root ;

}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
         vector<int>inorder ;
         inorder = preorder ;
         int preindex = 0 ;
         sort(inorder.begin(),inorder.end());
         return solve(preorder,inorder,preindex,0,preorder.size()-1);

    }
};