class Solution {
    bool isSame(TreeNode* l, TreeNode* r){
        if(!l && !r){
            return true;
        }
        if(!l || !r){
            return false;
        }
        if(l->val!=r->val){
            return false;
        }
        return isSame(l->left, r->right) && isSame(l->right,r->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return false;
        }
        return isSame(root->left,root->right);
    }
};
