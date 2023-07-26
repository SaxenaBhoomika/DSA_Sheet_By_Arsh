class Solution {
    vector<int>res;
    void inorder(TreeNode* root){
        
        if(root==NULL){
            return;
        }
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);

    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        
        return res;
    }
};
