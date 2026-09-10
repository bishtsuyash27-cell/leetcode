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
TreeNode * search(TreeNode * root, int start){
    if(root==NULL){
        return NULL ;
    }
    if(root->val==start){
        return root ;
    }
    TreeNode * left = search(root->left,start);
    if(left!=NULL){
        return left ;
    }
    TreeNode * right = search(root->right,start);
    if(right!=NULL){
        return right ;
    }

    return NULL ;

    
}
void fillparent(TreeNode * root , unordered_map<TreeNode*,TreeNode*>&mp){
    if(root==NULL){
        return  ;
    }
    if(root->left!=NULL){
        mp[root->left] = root;
    }
    if(root->right!=NULL){
        mp[root->right] = root ;
    }

    fillparent(root->left,mp);
    fillparent(root->right,mp);


}

    int amountOfTime(TreeNode* root, int start) {
        TreeNode * first = search(root,start);

        unordered_map<TreeNode*,TreeNode*>mp ;
        fillparent(root,mp);
       
        queue<pair<TreeNode*,int>> q ;

        q.push({first,0});
        
        int maxlevel = 0 ; 
        unordered_set<TreeNode*>st ;
        st.insert(first);
        while(q.size()>0){
            TreeNode * temp = q.front().first ;
            int level = q.front().second ;
            maxlevel = max(maxlevel,level);

            q.pop();

            if(temp->left){
                if(st.find(temp->left)==st.end()){
                q.push({temp->left,level+1});
                st.insert(temp->left);
                }
            }
            if(temp->right){
                if(st.find(temp->right)==st.end()){
                q.push({temp->right,level+1});
                st.insert(temp->right);
                }
            }

            if(mp.find(temp)!=mp.end()){
                if(st.find(mp[temp])==st.end()){
                q.push({mp[temp],level+1});
                st.insert(mp[temp]);
                }
            }
        }
        return maxlevel ;
    }
};