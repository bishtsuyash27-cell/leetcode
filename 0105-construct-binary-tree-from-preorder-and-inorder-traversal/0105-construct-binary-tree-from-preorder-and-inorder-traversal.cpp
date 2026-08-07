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
TreeNode*build(vector<int>&preorder,vector<int>&inorder,int start,int end,int &preindex){

    if(start>end){
        return NULL;
    }
  
     TreeNode* root = new TreeNode(preorder[preindex]);

    preindex++;

    int mid = start ;

    while(inorder[mid]!=root->val){
        mid++;
    }

    root->left = build(preorder,inorder,start,mid-1,preindex);
    root->right = build(preorder,inorder,mid+1,end,preindex);


    return root ;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preindex = 0 ;
       return  build(preorder,inorder,0,n-1,preindex);
    }
};