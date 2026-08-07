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
TreeNode * build(vector<int>& inorder, vector<int>& postorder, int start , int end, int &postindex){
    
    if(start>end){
        return NULL ;

    }

    TreeNode*root = new TreeNode(postorder[postindex]);
    postindex--;

    int mid = start ;

    while(inorder[mid]!=root->val){
        mid++;
    }

   
    root->right = build(inorder,postorder,mid+1,end,postindex);
    root->left = build(inorder,postorder,start,mid-1,postindex);

    return root ;


}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int postindex = inorder.size()-1;
        return build(inorder,postorder,0,n-1,postindex);
    }
};