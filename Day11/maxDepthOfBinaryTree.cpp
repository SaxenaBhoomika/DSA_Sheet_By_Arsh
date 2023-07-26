class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        int maxL=maxDepth(root->left);
        int maxR=maxDepth(root->right);
        return max(maxL,maxR)+1;
        
    }
};
