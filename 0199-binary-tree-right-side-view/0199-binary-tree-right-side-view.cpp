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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q ;
         vector<int>ans ;
            if(root==NULL){
                return ans ;
            }
        q.push(root);
       
        while(q.size()>0){
            int size = q.size();
            int level = 1 ;
            
            for(int i = 0 ; i<size;i++){

                TreeNode * temp = q.front();

                if(i==size-1){
                      ans.push_back(temp->val);
                }

                q.pop();

                if(temp->left!=NULL){
                    q.push(temp->left);

                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                
              
            }
            
            
        }
        return ans ;

    }
};