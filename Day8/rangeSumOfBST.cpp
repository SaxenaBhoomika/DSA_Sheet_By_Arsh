class Solution {
    void range(TreeNode* root, int low,int high, int &sum){
        if(!root){
            return ;
        }
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        range(root->left,low,high,sum);
        range(root->right,low,high,sum);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        range(root,low,high,sum);
        return sum;
    }
};
