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
    TreeNode* deleteNode(TreeNode* root, int key) {
         if(root==NULL){
            return NULL ;
        }
        if(root->val==key){
           //Case 1 : No child 
            if(root->left==NULL && root->right==NULL){
                return NULL ;
            }

            //Case 2 : 1 child only 
             if (root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left ;
                else return root->right ;
            }

            //case 3 : 2 child 
            if(root->left!=NULL && root->right!=NULL){
            TreeNode * temp  = root  ;

            temp = temp->left ;
            TreeNode * prev = root ; 
            while(temp->right!=NULL){
                prev = temp ;
                temp = temp->right ;

            }

            root->val = temp->val ;
            if(prev==root){
                prev->left = temp->left ;
            }else{
                prev->right = temp->left ;
            }
            

            }
            
                
    

        }
       
        if(root->val>key){
        root->left = deleteNode(root->left,key);
        }
        if(root->val<key){
        root->right = deleteNode(root->right,key);
        }

        return root ;
    }
};