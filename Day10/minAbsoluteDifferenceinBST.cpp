class Solution {
    void mini(TreeNode* root, int &mind, int &pval){
        if(root==NULL){
            return ;
        }
        mini(root->left,mind,pval);
        mind=min(mind,abs(pval-root->val));
        pval=root->val;
        mini(root->right,mind,pval);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        int mind=INT_MAX;
        int pval=INT_MAX/2;
        mini(root,mind,pval);
        return mind;
    }
};
